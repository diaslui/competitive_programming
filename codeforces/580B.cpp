#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
typedef long long ll;
#define debug(x) cout << #x << " = " << x << "\n";

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   ll n, d; cin >> n >> d;
   vector<pair<ll, ll>> v(n);
   for (int i=0; i < n; i++){
      int m, s; cin >> m >> s;
      v[i] = {m, s};
   }
  
   sort(v.begin(), v.end());
   ll ans = 0;
   ll c = 0;
   int l = 0;
   for (int r=0; r < n; r++){
      auto [mi, si] = v[r];
      c += si;

      while (v[r].first - v[l].first >= d){
         auto [mj, sj] = v[l]; 
         c -= sj;
         l++;
      }
      
      ans = max(ans, c);
   }


   cout << ans << endl;

  return 0;
}

