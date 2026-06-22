#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
typedef long long ll;
#define debug(x) cout << #x << " = " << x << "\n";
const long long MOD = 1e9 + 7;


int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   
   string s; cin >> s;
   

   ll ans = 0;
   for (ll k=1; k < s.size(); k++){
      for (ll i=0; i <= s.size()-k; i++){
         string v = s;
         if (k == 1){
            v.erase(i, 1);
         }else{
         v.erase(i, k);
         }
         ans += stoull(v) % MOD;
      }
   }

   cout << ans % MOD << endl;
   return 0;
}

