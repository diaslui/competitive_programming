#include <bits/stdc++.h>

using namespace std;

int main(){

  int t; cin >> t;
  while (t--){
   int n; cin >> n;
   vector<vector<int>> edg(n+1);

   auto components = [&]()->int{
    int c = 1;
    vector<bool> visited(n, 0);
    for (int i=2; i <= n; i++){
          if (edg[i].empty() || visited[i]) continue;
          
          stack<int> s;
          s.push(i);
          visited[i] = 1;
          while (!s.empty()){
             int t = s.top();
             s.pop();
             for (int j: edg[t]){
               if (visited[j]) continue;
               visited[j] = 1;
               s.push(j);
             }
 
         }
         c++;
   
    }
  
   return c;

   };
   n--;
   int ans = 1;
   while (n--){
    int a, b;
    cin >> a >> b;
    edg[a].push_back(b);
    edg[b].push_back(a);
    cout << components() << "  <<< \n";
   // ans = max(ans, components());
   }
   
   cout << ans << "\n";  

  }



  return 0;
}
