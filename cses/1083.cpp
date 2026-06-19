#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
typedef long long ll;
#define debug(x) cout << #x << " = " << x << "\n";

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   ll n; cin >> n;
   ll ans = (n * (n+1)) / 2;
   for (ll i=0; i < n-1; i++){
      ll x;
      cin >> x;
      ans -= x;
     }

   cout << ans << endl;
   return 0;
}

