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

bool test(ll x, ll mid, ll b){
   return ((((1 + x) * x) / 2) - mid) <= b;
}


void solve(){

   ll a, b; cin >> a >> b;   

   ll l = 0;
   ll r = a;

   ll ans = 0;
   while (l <= r){
      ll mid = (l+r)/2;
      bool tt = test(a - mid,mid, b);
      if (tt){
         ans = mid;
         r = mid - 1;
      }else{
         l = mid + 1;
      }
      
   }
   cout << ans << endl;
   

}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

