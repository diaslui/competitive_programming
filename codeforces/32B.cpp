#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
typedef long long ll;
#define debug(x) cout << #x << " = " << x << "\n";

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   
   string s; cin >> s;
   string ans = "";
   for (int i=0; i < s.size(); i++){
      
      if (s[i] == '-'){
         if (s[i+1] == '-'){
            ans.push_back('2');
            i++;continue;
         }else if (s[i+1] == '.'){
            ans.push_back('1');i++;
            continue;
         }
   
      }
   
      if (s[i] == '.'){
            ans.push_back('0');
         }
      }

   cout << ans << endl;

   return 0;
}

