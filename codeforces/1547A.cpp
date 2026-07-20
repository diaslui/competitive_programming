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
   int x1, y1; cin >> x1 >> y1;
   int x2, y2; cin >> x2 >> y2;
   int f1, f2; cin >> f1 >> f2;
   int ans = abs(x1 - x2) + abs(y1 - y2);
  
   if ((f2 > y1 && f2 < y2) || (f2 > y2 && f2 < y1)){
      if (f1 == x2 && f1 == x1) ans += 2;
   }
   if ((f1 > x1 && f1 < x2) || (f1 > x2 && f1 < x1)){
   if (f2 == y2 && f2 == y1) ans += 2;
   }

   cout << ans << endl;
}

int main(){_
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}

