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
   vector<int> v(101, 0);
   int m = INF;
   int ans = 0;
   for (int i=0; i < n; i++){
      int x; cin >> x;
      v[x]++;
      m = min(m, x);
   }
   v[m] = 0;
   for (int i=0; i < v.sz(); i++){
      ans += v[i];
   }

   cout << ans << endl;
}

int main(){_
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}

