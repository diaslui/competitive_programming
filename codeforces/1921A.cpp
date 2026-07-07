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

int main(){_

   int t; cin >> t;
   while (t--){
 
     vector<pii> v(4);
      
     for (int i=0; i < 4; i++){
      cin >> v[i].fi >> v[i].se;
     }

     int ans = INF;
     for (int i=0; i < 4; i++){
      for (int j=0; j < 4; j++){
         if (i == j) continue;

         int dx = v[j].fi - v[i].fi;
         int dy = v[j].se - v[i].se;
         int dist = dx * dx + dy * dy;
         ans = min(ans, dist);
         }
     }
   

     cout << ans << endl;
   }

   return 0;
}

