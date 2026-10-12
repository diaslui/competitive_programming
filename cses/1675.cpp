#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 1e9 + 7;

#define fi first
#define se second
#define pb push_back
#define sz size

using pii = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;

#define endl "\n"
#define dbg(x) cout << #x << " = " << x << "\n";
#define all(x) x.begin(), x.end()


vi dsu;

int find(int p){
   if (dsu[p] <= -1){
      return p;
   }

   return dsu[p] = find(dsu[p]);
}

int unite(int x, int y){
   int px = find(x);
   int py = find(y);
   if (px == py) return 0;

   if (dsu[py] < dsu[px]) swap(py, px);
   
   dsu[px] += dsu[py];
   dsu[py] = px;
   return 1;
}


void solve(){
   
   int n, m; cin >> n >> m;
   dsu.assign(n+5, -1);

   struct Road{
      int a, b; 
      int c;
      
   };

   vector<Road> roads(m);

   for (Road &r : roads){
      cin >> r.a >> r.b >> r.c;
   }

   sort(roads.begin(), roads.end(), [&](Road &x, Road &y){
      return x.c < y.c;
   });

   int added = 0;
   ll cost = 0;

   for (Road &r: roads){
      int st = unite(r.a, r.b);
      cost += st * r.c;
      added += st;
   }

   if (added != n-1) {
      cout << "IMPOSSIBLE" << "\n";
      return;
  }

  cout << cost << endl;

}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

