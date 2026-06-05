#include <bits/stdc++.h>

using namespace std;

int main(){

 string s;
 string r;
 cin >> s >> r;
 int pos = 0;
 for(int i=0;i < r.size(); i++){
   if (r[i] == s[pos]){ 
     pos++;
   }
 }

 cout << pos + 1 << "\n";


 return 0;
}
