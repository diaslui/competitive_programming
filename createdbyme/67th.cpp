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
  /* the curse of '67th
   *
   *  given an number n, form the number n using the maximum possible digits 6 and 7, maximizing the 6's digits (if you can).
   *  if the number cant be formed using this digits, return -1 otherwise the quantities of 6's and 7's.
   *
   */

   ll n; cin >> n;
   
   ll y = n%6;
   ll x = (n - y * 7) / 6;
   if (y*7 + x * 6 != n){
      cout << -1 << endl;
      return;
      }

   cout << x << " " << y << endl;
}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

