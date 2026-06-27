#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
typedef long long ll;
#define debug(x) cout << #x << " = " << x << "\n";

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n, m, d, k, ans; cin >> n >> m >> d; ans = 0;
   vector<int> v(n*m);
   
  for (int i=0; i < n*m; i++){
      cin >> v[i];
      if (i == 0) k = v[i] % d;
      if (v[i] % d != k) ans = -1;
   }

   if (ans == -1){
      cout << -1 << endl;
      return 0;
   }
   sort(v.begin(), v.end());
   int mid = v.size()/2;
   
   for (int i=0; i < n*m; i++){
      ans += abs(v[i] - v[mid])/d;
   }

   cout << ans << endl;


   return 0;
}

