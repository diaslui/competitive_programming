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

   int n, x; cin >> n >> x;
   
   vi dp(x+1, 0);
   vi coins(n);
   for (int i=0; i < n; i++){
      cin >> coins[i];
   };
   dp[0] = 1;

   for (int i=1; i <= x; i++){
      for (int c: coins){
         if (i - c < 0) continue;
         dp[i] = (dp[i-c] + dp[i]) % MOD;
      }
   }
   cout << dp[x] << endl;
}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

