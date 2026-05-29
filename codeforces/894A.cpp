#include <bits/stdc++.h>

using namespace std;

int main(){
  string s; cin >> s;
  int ans = 0; 
  for (int i=0; i < s.size(); i++){
    if (s[i] != 'Q') continue;
    for (int j=i+1; j < s.size(); j++){
      if (s[j] != 'A') continue;
      for (int k=j+1; k < s.size(); k++){
         if (s[k] != 'Q') continue;
          ans++;
      }   
    }
  } 


 cout << ans << "\n";
 return 0;
}
