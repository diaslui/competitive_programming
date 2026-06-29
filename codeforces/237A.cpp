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
   vector<int> t(1440,0);
   int ans = 0;
   for (int i=0; i < n; i++){
      int a, b; cin >> a >> b;
      
      int k = 60 * a + b;
      t[k]++;
      ans = max(ans, t[k]);
   }

   cout << ans << endl;
   return 0;
}

