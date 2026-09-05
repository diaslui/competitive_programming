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

   int n, k; cin >> n >> k;
   vi h(n);
   vi dp(k);

   for (int i=0; i < n; i++) cin >> h[i];
   dp[0] = 0;
   for (int i=1; i < n; i++){
      int v = INF;
      for (int j=1; j <= k; j++){
         if (i - j < 0) break;
         v = min(v, dp[(i-j) % k] + abs(h[i] - h[i-j]));
      }

      dp[i % k] = v;
   }

   cout << dp[(n-1) % k] << endl;
}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

