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
   vi a(n); vi b(n);
   int amin, bmin; amin = 1e9 + 1; bmin = 1e9 + 1;

   for (int i=0; i < n; i++){
      cin >> a[i]; amin = min(a[i], amin);
   }

   for (int i=0; i < n; i++){
      cin >> b[i]; bmin = min(b[i], bmin);
   }
   
   ll ans = 0;
   for (int i=0; i < n; i++) ans += max(a[i] - amin, b[i] - bmin);
   
   cout << ans << endl;

}

int main(){_
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}

