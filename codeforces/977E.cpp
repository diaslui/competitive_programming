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

int main(){_

   int n, m; cin >> n >> m;
   vvi edg(n+1, vi());
   vi visited(n+1, 0);
   while (m--){
   int a, b; cin >> a >> b;
   edg[a].pb(b);
   edg[b].pb(a);
   }
   auto cycle = [&](auto self,int from, int x) -> bool{

      int a = 0;
      for (int i: edg[x]){

        if (!visited[i]){
            visited[i] = 1;
            a += self(self,x, i);
        }else if (i != from){
            a += 1;
        }

      }

      return a > 0;
   };

   int ans = 0;
   for (int i=1; i < edg.sz(); i++){
      
       if (!visited[i]){
        visited[i] = 1;
        ans += cycle(cycle,-1, i);
       }
   }

   cout << ans << endl;
   return 0;
}

