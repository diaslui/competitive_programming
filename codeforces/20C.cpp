#include <bits/stdc++.h>

using namespace std;

#define INF 1e18
#define ll long long

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m; cin >> n >> m;
  vector<vector<pair<int,int>>> adj(n+1);
  
  while(m--){
   int a, b, w;
   cin >> a >> b >> w;
   adj[a].push_back({b, w});
   adj[b].push_back({a, w});
  }
  
  vector<ll> dist(n+1, INF);
  priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll,int>>> pq;
  
  vector<int> parent(n+1, -1);
  dist[1] = 0;
  pq.push({0, 1});
  parent[1] = -1; 

  int target = n;
 
  while (!pq.empty()){
  
      auto [d, v] = pq.top();
      pq.pop();
     
      if (d > dist[v]){
          continue;
      } 

     if (v == target){
       break;
      }
      
      for (auto [u, w] : adj[v]){

         if (d + w < dist[u]){
           dist[u] = d + w;
           pq.push({dist[u], u});
           parent[u] = v; 
          }
       } 
  }
  

  if (dist[n] == INF){
    cout << -1 << "\n";
    return 0;
   }

  vector<int> path;
  for (int i = n; i != -1; i=parent[i]){
    path.push_back(i);
  }

  for (int i=path.size()-1; i >=  0; i--){
     cout << path[i];
     cout << (i == 0 ? "\n" : " ");

  }

  
  return 0;
}
