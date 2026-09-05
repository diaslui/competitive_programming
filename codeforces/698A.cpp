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
   vvi dp(n+1, vector<int>(3, INF));
   dp[0][0] = 0;
   dp[0][1] = 0;
   dp[0][2] = 0;
   for (int i=1; i <= n; i++){
   
      int x; cin >> x;
      
      dp[i][0] = 1 + min({dp[i-1][0], dp[i-1][1], dp[i-1][2]});

      if (x == 1 || x == 3){
         dp[i][1] = min(dp[i-1][0], dp[i-1][2]);
      }
      
      if (x == 2 || x == 3){
         dp[i][2] = min(dp[i-1][0], dp[i-1][1]);
      }
   }

   int ans = min({dp[n][0], dp[n][1], dp[n][2]});
   cout << ans << endl;
   

}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

