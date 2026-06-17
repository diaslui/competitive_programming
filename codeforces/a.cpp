#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
#define ll long long

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   

   int n, m; cin >> n >> m;
   vector<vector<int>> adj(n+1);
   while(m--){
   int a, b; cin >> a >> b;
   adj[a].push_back(b);
   }
   vector<bool> visited(n+1, 0);
   string ans = "unknown topology";
   
   if (adj[1].size() == m){
	cout << "star topology" << endl;
	return 0;
   } 
	
   auto dfs = [&] (auto self, int i) -> bool{
	if (adj[i].size() > 1){
          ans = "unknown topology";
	  return 0;
         }
        if (!visited[adj[i][0]]){
 	visited[adj[i][0]] = 1;
        return self(self, adj[i][0]);
        }else{
	
	if (adj[i][0] == 1){
        ans = "unknown topology";
 	return 0;
        } 

	ans = "ring topology";
	return 0;
        }

	
	ans = "bus topology";
	return 0;
   };	
	
   for (int i=1;i <= n; i++){

     if (!visited[i]){
	visited[i] = 1;
	if (!dfs(dfs, i)){ 
           break;
       	}
}
	

    }

   cout << ans << endl;
   return 0;
}

