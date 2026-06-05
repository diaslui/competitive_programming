#include <bits/stdc++.h>

using namespace std;


int main(){

  int a,b; a = 0; b = 0;
  string s; cin >> s;
  
 
  for (int i=1; i < s.size(); i++){
   if (a != 1 && s[i-1] == 'A' && s[i] == 'B'){
      a = 1;
      i++;
      continue;
    } 
   if (s[i-1] == 'B' && s[i] == 'A' && a == 1){
     a = 2; 
     break;
    }
   
   }
    
  
  for (int i=s.size()-2; i > -1; i--){
   if (b != 1 && s[i+1] == 'B' && s[i] == 'A'){
      b = 1;
      i--;
      continue;
    } 
  
   if (s[i+1] == 'A' && s[i] == 'B' && b == 1){
     b = 2; 
     break;
    }
   
   }



   if (b == 2 || a == 2){
   cout << "YES";
   }
   else{
    cout << "NO";
     } 


 
   cout << "\n";
  return 0;
}
