#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
typedef long long ll;
#define debug(x) cout << #x << " = " << x << "\n";

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n; cin >> n;
   vector<int> v(n);
   vector<int> dp(n);

   for (int i=0; i < n; i++){
   cin >> v[i];
   }

   dp[0] = 0;
   dp[1] = abs(v[1] - v[0]);

   for (int i=2; i < n; i++){
      int one = abs(v[i] - v[i-1]) + dp[i-1];
      int two = abs(v[i] - v[i-2]) + dp[i-2];

      dp[i] = min(one, two);
   }
   
   cout << dp[n-1] << endl;



   return 0;
}

