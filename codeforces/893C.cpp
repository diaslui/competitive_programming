#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, m; cin >> n >> m;
  vector<int> v(n+1);
  vector<vector<int>> adj(n+1, vector<int>());
  vector<bool> visited(n+1, 0);
  for(int i = 1; i <= n; i++){
   cin >> v[i];
  }
  
  while (m--){
     int a,b; cin >> a >> b;
     adj[b].push_back(a);
     adj[a].push_back(b);
   }

  auto minv = [&](int x) -> int {
    stack<int> s;
    s.push(x);
    visited[x] = 1;
    int res = v[x];
    while (!s.empty()){
        int top = s.top();
        s.pop();
        for (int i: adj[top]){
 
           if (!visited[i]){ 
            visited[i] = 1;
            s.push(i);
            res = min(res, v[i]);
            }
        }
   }
   return res; 
     
  };

  long long ans = 0;
  for (int i=1; i <= n; i++){
 
   if (!visited[i]){
      ans += minv(i);
   }
  }
 
  cout << ans << "\n";
  return 0;
}
