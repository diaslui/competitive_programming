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
   vector<int> coins(n);
   for (int i = 0; i < n; i++){
       cin >> coins[i];
   }
   vector<int> dp(x+1, -1);
   dp[0] = 0;
   for (int i=1; i <= x; i++){
       int m = INF;

       for (int coin : coins){
          int index = i - coin; if (index < 0) continue;
          m = min(m, dp[index] + 1);
       }

      dp[i] = m;
   }
   if (dp[x] == INF) dp[x] = -1; 
   cout << dp[x] << endl;


}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

