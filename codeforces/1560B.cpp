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

   int a, b, c; cin >> a >> b >> c;
   int x = abs(b - a) - 1;
   int y = min(a, b) - 1;
   int maxn = x - y + max(a, b); 
   int step = max(x, y);


   if (x < y || c > maxn){
      cout << -1 << endl; return;
   }

   int ans = c - step - 1;
   
   if (ans < 1) {
      ans = c + step + 1;
   }

   cout << ans << endl;
}

int main(){_
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}

