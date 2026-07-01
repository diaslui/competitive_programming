#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 1e9 + 7;

#define endl "\n"
#define dbg(x) cout << #x << " = " << x << "\n";

int main(){_

   auto check = [&](ll x) -> bool{
      int mask = 0;
      while(x > 0){
         mask |= (1 << (x%10));
         x/=10;
      }

      return __builtin_popcount(mask) <= 2;
   };

   int t; cin >> t;
   while (t--){
   ll x; cin >> x;
   ll ans = 11;
   while (ans < 1000000000000LL){
      ll r = ans * x;
      if (check(r)) break;

      ans *= 10;
      ans++;
   }
   cout << ans << endl;


   }

   return 0;
}

