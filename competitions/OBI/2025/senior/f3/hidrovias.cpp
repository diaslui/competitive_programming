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

struct Dsu{
   
   vi dsu;

   Dsu(int n){
      dsu.assign(n+1, -1);
      }

   int find(int x){
      if (dsu[x] <= -1) return x;
      return dsu[x] = find(dsu[x]);
   }

   int unite(int x, int y){
      x = find(x);
      y = find(y);

      if (x == y) return 0;
      if (dsu[y] < dsu[x]) swap(x, y);
   
      dsu[x] += dsu[y];
      dsu[y] = x;
      return 1;
   }

   int sizx(int x){
      return abs(dsu[find(x)]);
   }
};

void solve(){

  int n, m, k; cin >> n >> m >> k;
  
  Dsu dsu(n);

  vector<tuple<int, int, int>> edg(m);

  for (int i=0; i < m; i++){
      int t, a, b; cin >> a >> b >> t;
      edg[i] = {t, a, b};
   }

  for (auto &[t, a, b] : edg){
      if (t==2) continue;

      if (!dsu.unite(a,b)){
       cout << "N" << endl;
       return;
      }

     }
  

  int q = 0; 
  for (auto &[t, a, b] : edg){
      if (t==1) continue;
      if (!dsu.unite(a,b)) q++;
     }


  if (q > k) cout << "N"; else cout << "S";
  cout << endl;
   
 
}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

