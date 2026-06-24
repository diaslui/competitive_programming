#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
typedef long long ll;
#define debug(x) cout << #x << " = " << x << "\n";

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n, m; cin >> n >> m;
   vector<vector<int>> adj(n+1, vector<int>());
   vector<int> visited(n+1, 0);

   while(m--){
   int a,b; cin >> a >> b;
   adj[a].push_back(b);
   adj[b].push_back(a);
   }

   auto dfs = [&](auto self, int x)-> int {
      int q = 1;
      for (int i: adj[x]){
         if (!visited[i]){
            visited[i] = 1;
            q += self(self, i);
         }
      }
  
      return q;

   };


   int ans = 0;
   for (int i = 1; i <= n; i++){
         if (!visited[i]){
         visited[i] = 1;
         ans = max(dfs(dfs, i), ans);}
   }
   cout << ans << endl;
   


   return 0;
}


