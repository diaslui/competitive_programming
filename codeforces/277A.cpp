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

vector<int> dsu;

int find(int x){
     if (dsu[x] < 0){
         return x;
     }

     return dsu[x] = find(dsu[x]);
}

int unite(int x, int y){

   int px, py;
   px = find(x);
   py = find(y);

   if (px == py) return 0;
   if (dsu[py] < dsu[px]) swap(py, px);
   
   dsu[px] += dsu[py];
   dsu[py] = px;
   return 1;
}

void solve(){
   int n, m; cin >> n >> m;
   dsu.assign(m+1, -1);
   vector<int> lang(m+1, 0);
   int ans = 0; 
   int extra = 0;
   for (int i=0; i < n; i++){
      int old = -1;
      int k; cin >> k;
      if (!k){
         extra++; continue;
      };
      while (k--){
         int v; cin >> v;
         lang[v] = 1;
         if (old != -1){
            unite(old, v);
         }
         old = v;
      }
   }

   int has = 0;
   for (int i=1; i <= m; i++){
      if (!lang[i]) continue;
      if (dsu[i] < 0) ans++;
      has = 1;
   }
   if (has) ans--;
   ans += extra;
   cout << ans << endl;
}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

