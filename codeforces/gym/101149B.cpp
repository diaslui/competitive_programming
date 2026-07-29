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
   vector<pair<int, pii>> v(n);
   for (int i=0; i < n; i++){
      int x, y; cin >> x >> y;
      v[i] = {x - y, {x, y}};
   }
   
   sort(v.rbegin(), v.rend());
   
   int remain = 0;
   ll ans = 0;
   for (auto x: v){
      auto [a, b] = x.second;
      if (remain < a){
      ans += (a - remain);
      remain = a;
      }

      remain -= b;
   }
   
   cout << ans << endl;

}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

