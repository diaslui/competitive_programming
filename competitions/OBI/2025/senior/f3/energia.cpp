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

   int n, q, k; cin >> n >> q >> k;
   vi v(n+1);
   for (int i=1; i <= n; i++) cin >> v[i];

   vi g(n+1, 0);
   int qq = 0;

   for (int i=1; i <= n; i++){
      for (int j=i+1; j <= n; j++){
         int e = abs(i - j) + abs(v[i] - v[j]);
         if (e == k){
            qq++;
            g[max(i,j)]--;
            g[min(i,j)-1]++;
         }
      }
   }
   
   int acc = qq;
   for (int i=n; i >= 1; i--){
         acc += g[i];
         g[i] = acc;
   }
   
   cout << qq << endl;
   while (q--){
      int x; cin >> x;
      cout << g[x] << endl;
   }

}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

