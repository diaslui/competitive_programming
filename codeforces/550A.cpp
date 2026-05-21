#include <bits/stdc++.h>

using namespace std;


int main(){

  string s,match; cin >> s;
  
  int count = 0;
  for (char c: s){
    match.push_back(c);
    if (match.size() == 2){
        
       if (match == "BA" || match == "AB"){
            count++;
            match = "";
       }else{
            match.erase(0,1);
       }
     }
   
    }
   

    if (count >= 2){
    cout << "YES"; 
   }else{
    cout << "NO";
   }


  cout << "\n";
  return 0;
}
