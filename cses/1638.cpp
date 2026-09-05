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

int dc[2] = {1, 0};
int dr[2] = {0, 1};

void solve(){
   
   int n; cin >> n;
   vvi grid(n+1, vector<int>(n+1, 0));
   vvi dp(n+1, vector<int>(n+1, 0));
   for (int r=1; r <= n; r++){
   for (int c=1; c <= n; c++){
   char x; cin >> x; if (x == '*') grid[r][c] = 1;
   }}
   

   dp[0][1] = 1;
   for (int r=1; r <= n; r++){
      for (int c=1; c <= n; c++){
           if (grid[r][c] == 1) dp[r][c] = 0;
           else dp[r][c] = dp[r][c-1] + dp[r-1][c];
           dp[r][c] %= MOD;
      }
   }  

   cout << dp[n][n] << endl;
}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

