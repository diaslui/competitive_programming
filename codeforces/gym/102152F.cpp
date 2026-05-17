#include <bits/stdc++.h>

using namespace std;


bool solve(string s){

 int count = 1;
 for(int i = 1; i < s.size(); i++){
    char c = s[i];
    bool isUpper = 'A' - c >= 0 && 'A' - c < 26;
    
    cout << c << " / " << isUpper << "  \n";
if (isUpper){
     count++;
  }

}


if (count > 7){
return 0;
}  

return 1;

}



int main(){

  int t; cin >> t;
  while (t--){



  string s; cin >> s;
  cout <<(solve(s) ? "YES" : "NO") << "\n";



}

  return 0;


}
