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
   using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vl = vector<ll>;
using vi = vector<int>;
using vvi = vector<vi>;
#define endl "\n"
#define dbg(x) cout << #x << " --> " << x << "\n";
#define all(x) x.begin(), x.end()

void solve(){

   int n; cin >> n;
   vi v(n);
   int ida = 0;
   for (int i=0; i < n; i++){
      cin >> v[i];
      if (v[i] >= v[ida]) ida = i;
   }
   int idb = (ida == 0 ? 1 : 0);
   for (int i=0; i < n; i++) if (i != ida && v[i] >= v[idb]) idb = i;

   for (int i=0; i < n; i++){
      if (i > 0) cout << " ";
      if (i == ida) cout << v[i] - v[idb];
      else cout << v[i] - v[ida];
      if (i == n-1) cout << endl;
   }
   

}

int main(){_
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}

