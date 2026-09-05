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
   vi h(n);
   vi dp(n);
   for (int i=0; i < n; i++) cin >> h[i];
   dp[0] = 0;
   for (int i=1; i < n; i++){
      
       int a = INF; int b = INF;
       a = abs(h[i-1] - h[i]) + dp[i-1];
       if (i > 1) b = abs(h[i-2] - h[i]) + dp[i-2];
       
       dp[i] = min(a, b);
   }

   cout << dp[n-1] << endl;

}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

