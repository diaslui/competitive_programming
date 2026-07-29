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

   int n; cin >> n;
   int q1, q2; q1 = 0; q2 = 0;
   while (n--){
      int v; cin >> v;
      if (v == 2) q2++;
      else q1++;
   }
   int ans = 1;
   int total = q1 + (q2 * 2);
   if (total % 2 != 0){
      ans = 0;
   }else if (q2 % 2 != 0 && q1 < 2) ans = 0;
   cout << (ans ? "YES" : "NO") << endl;

}

int main(){_
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}

