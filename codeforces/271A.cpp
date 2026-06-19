#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
typedef long long ll;
#define debug(x) cout << #x << " = " << x << "\n";

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   
   int y; cin >> y;
   y++;
   auto d = [&](int y) -> bool{
   string s = to_string(y);
   sort(s.begin(), s.end());
   for (int i=0; i < s.size()-1; i++){
      if (s[i] == s[i+1]){
         return 0;
      }
   }
   
    return 1;
   };
   
   while (!d(y)){
      y++;
   } 
   cout << y << endl;


   return 0;
}

