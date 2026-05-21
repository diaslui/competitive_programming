#include <bits/stdc++.h>

using namespace std;

int main(){

 int t; cin >> t;
 
 while(t--){

   int n; cin >> n;
   int o, c;
   o = 0; c = 0;
   
   for (int i =0; i < n; i++){

     char ch; cin >> ch;
     if (ch == '('){
      o++;
      }else{
      c++;
     }
   
   }


  
  if (c == o){
   cout << "YES\n"; 
  }else{
   cout << "NO\n";
  }



}


 return 0;

}
