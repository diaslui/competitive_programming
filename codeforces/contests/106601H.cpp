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

   
   int n; cin >> n;
   vector<ll> v(n*2);
   ll ans = 0;
   for (ll i=0; i < n*2; i++){
   int x, y; cin >> x >> y;
   v[i] = x + y; ans -= y;
   };

   sort(v.rbegin(), v.rend());
   
   for (ll i=0; i < n; i++){
      ans += v[i];
   }
   cout << ans << endl;
   return 0;
}

