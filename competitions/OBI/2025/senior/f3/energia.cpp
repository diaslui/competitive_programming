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

void solve(){

   int n, q, k; cin >> n >> q >> k;
   vi v(n+1);
   int d[q];

   for (int i=1; i <= n; i++) cin >> v[i];
   for (int i=0; i < q; i++) cin >> d[i];

  int key = 0;
   
  vvi add(n+2, vi());
  vvi rm(n+2, vi());
  
  set<int> g[n+1];

  for (int i=1; i <= n; i++){
   
      for (int j=i+1; j <= n; j++){
         int kij = abs(i - j) + abs(v[i] - v[j]);
         if (kij != k) continue;
         
         add[i].pb(key);
         rm[j+1].pb(key);

         key++;
      }

   }

   set<int> curr;
   for (int i=1; i <= n; i++){
      
      for (int a: add[i]) curr.insert(a);
      for (int a: rm[i]) curr.erase(a);
      
      g[i] = curr;
   }


   cout << key << endl;
   
   for (int i=0; i < q; i++){
      
      int idx = d[i];
      if (i > 0){
      if (g[idx] > g[d[i-1]]) swap(g[idx], g[d[i-1]]);
      for (int j: g[d[i-1]]) g[idx].insert(j);
      }

      int szx = g[idx].size();
      szx = key - szx;
      cout << szx << endl;
   }

}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

