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
      int n, ans; cin >> n;
      int s = 0;
      for (int i=0; i < n; i++){
         int v; cin >> v;
         s += v;
      }
      
      ans = (n + 1) - s;
      if (ans < 0){
         ans = s - n;
      }else ans = 1;

      if (s == n) ans = 0;

      cout << ans << endl;
   
  }

   return 0;
}

