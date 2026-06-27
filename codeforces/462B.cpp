#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
typedef long long ll;
#define debug(x) cout << #x << " = " << x << "\n";

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   ll k, n; cin >> n >> k;
   vector<ll> alf(26, 0);
   ll ans = 0;
   for (ll i=0; i < n; i++){
      char c; cin >> c;
      alf[c - 'A']++;

   }
   sort(alf.rbegin(), alf.rend());
   for (ll v: alf){
    if (v < k){
      ans += v * v;
      k -= v;
    }else{
      ans += k*k;
      k = 0;
      break;
    }
   }
   cout << ans << endl;
   return 0;
}

