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
   
   ll n, q;cin >> n;
   vector<pair<ll, ll>> v(n);
   for (ll i=0; i < n; i++){
      ll d; cin >> d;
      v[i] = {d, i};
   }

   sort(v.begin(), v.end());
   cin >> q;
   ll a, b; a=0; b=0;
   while(q--){
      ll x; cin >> x;
      ll high = n-1;
      ll low = 0;
      ll aux;
      while (low <= low){
      ll mid = (high + low) / 2;
      if (v[mid].first == x){
         aux = v[mid].second; break;
      }

      if (v[mid].first > x){
         high = mid-1;
      }else{
         low = mid+1;
      }
      }   

      a += aux+1; b += n - aux;
   }
   cout << a << " " << b << endl;
   
   

   return 0;
}

