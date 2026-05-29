#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  
 int n; cin >> n;
 vector<int> parent(n+1); 
 for(int i=1; i <= n; i++){
   cin >> parent[i];
 }
 
 auto dfs = [&](int x) -> bool{
  
   int steps = 1;
   stack<int> s;
   s.push(x);
   
   while (!s.empty()){
  
     int t = s.top();
     if (steps == 3){
         if (parent[t] == x){
            return 1;
         }
 
       return 0;
      }   
 
     s.pop();
     s.push(parent[t]);
     steps++;
      
  }
 
  return 0;
 };
 
 int is = 0;
 for (int i=1; i <= n; i++){
 
    if (dfs(i)){
       is = 1;
       break;
     }
 
  }
  
 cout << (is ? "YES" : "NO");
 cout << "\n";
 
 
 
 return 0;
}
