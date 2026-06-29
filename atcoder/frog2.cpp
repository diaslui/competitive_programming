#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 
#define endl "\n"
typedef long long ll;
#define debug(x) cout << #x << " = " << x << "\n";

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   
   int n, k; cin >> n >> k;
   vector<int> v(n);
   vector<int> dp(k, INF);
   for (int i=0; i < n; i++) cin >> v[i];
   dp[0] = 0;

   for (int i=1; i < n; i++){
     int mincost = INF;
      
     for (int j=0; j < k; j++){
         if (i - j+1 >= 0){
            mincost = min(mincost, dp[(i-j+1)%k] + abs(v[i] - v[i-j+1]));
         }
     }


     dp[i%k] = mincost;
   }

   cout << dp[(n-1)%k] << endl;

   


   return 0;
}

