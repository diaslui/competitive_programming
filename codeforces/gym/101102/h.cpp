#include <bits/stdc++.h>

using namespace std;

int main(){

  int t; cin >> t;
  while (t--){
 
   int c, k; cin >> c >> k;
   int l = 0; int ans = 0;
   for (int i=0; i < c; i++){
   
    char b; cin >> b;
    if (b == '0'){
     l++;
     continue;
    }
    ans = max(ans, l);
    l = 0;
   }
  
   if (ans >= k){
      cout << "yes\n";
   }else{
      cout << "no\n";
   }
   
 
  }
 
 
  return 0;
 }
