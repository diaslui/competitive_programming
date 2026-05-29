#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, t; cin >> n >> t;
  vector<int> v(n+1);
  vector<bool> visited(n+1, 0);
  bool ans = 0;
  for (int i=1; i < n; i++){
    cin >> v[i];
   }
 
  stack<int> s;
  s.push(1);
  visited[1] = 1;
  while (!s.empty()){
    int top = s.top();
    s.pop();
    if (!visited[top + v[top]]){
      if (top + v[top] == t){
         ans = 1;  
         break;
       } 
    
     visited[top + v[top]] = 1;
     s.push(top + v[top]);
  }
 
  } 
   if (ans){ 
    cout << "YES";
   }else{
    cout << "NO";
    }

   cout << "\n";
   return 0;
}
