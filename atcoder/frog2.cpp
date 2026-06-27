#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
typedef long long ll;
#define debug(x) cout << #x << " = " << x << "\n";

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n, k; cin >> n >> k;
   vector<int> v(n);
   vector<int> dp(k+1, 0);
   for (int i=0; i < n; i++){
      cin >> v[i];
   }

   for (int i=0; i < n; i++){
     int c = 1e5;
     for (int j=0; j <= k; j++){
            if (j >= i) continue;
            c = min(c, dp[j] + abs(v[i] - v[max(0, i - k + j)]));
            if (j==0) continue;
            dp[j-1] = dp[j];
      }

    dp[k] = c;
   }

   cout << dp[n-1] << endl;

   return 0;
}

