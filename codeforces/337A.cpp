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

   int n, m; cin >> n >> m;
   vi v(m);

   for (int i=0; i < m; i++) cin >> v[i];
   sort(v.begin(), v.end());

   int ans = abs(v[0] - v[n-1]);
   for (int i=0; i <= m-n; i++){
        ans = min(ans, abs(v[i] - v[i+n-1]));
   }

   cout << ans << endl;
}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

