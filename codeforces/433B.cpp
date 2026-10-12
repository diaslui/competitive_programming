#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 1e9 + 7;

#define fi first
#define se second
#define pb push_back
#define sz size

using pii = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;

#define endl "\n"
#define dbg(x) cout << #x << " = " << x << "\n";
#define all(x) x.begin(), x.end()

void solve(){
   int n; cin >> n;

   vector<ll> v(n+1);
   ll pref[n+1];
   ll spref[n+1];

   pref[0] = 0;
   spref[0] = 0;

   for (int i=1; i <= n; i++){
      cin >> v[i];
      pref[i] = pref[i-1] + v[i];
   }
   
   sort(v.begin(), v.end());

   for (int i=1; i <= n; i++){
      spref[i] = spref[i-1] + v[i];
   }

   int q; cin >> q;
   while(q--){
      
      int a, l, r; cin >> a >> l >> r;

      if (a == 1){
         cout << pref[r] - pref[l-1] << endl;
      }else cout << spref[r] - spref[l-1] << endl;
      
   }
   

}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

