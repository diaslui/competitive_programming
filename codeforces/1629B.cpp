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

   int l, r, k; cin >> l >> r >> k;
   int il = l;
   int ir = r;
   if (ir % 2 == 0) ir--;
   if (il % 2 == 0) il++;
   int c = (ir - il)/2; c++;
   int ans = c <= k || (r == l && r != 1);
   cout << (ans ? "YES" : "NO") << endl;

}

int main(){_
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}

