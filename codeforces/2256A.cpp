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

   ll a, b, c; cin >> a >> b >> c;
   
   ll currmax = max(a, max(b,c)); 
   while (currmax > (a + b + c) - currmax){
      
      if (a == currmax) a = b+c;
      else if (b == currmax) b = a + c;
      else c = a + b;
   
      currmax = max(a, max(b,c)); 
   } 

   int ans = currmax - min(a, min(b,c));
   cout << ans << endl;
}

int main(){_
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}

