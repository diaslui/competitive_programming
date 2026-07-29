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

   int n, q; cin >> n >> q;
   vector<int> prefix(n+1, 0);
   for (int i=1; i <= n; i++){
      char c; cin >> c;
      int x = c - 'a'; x++;
      prefix[i] = prefix[i-1] + x;
   }

   while (q--){
      int l,r; cin >> l >> r;
      ll sumx = prefix[r] - prefix[l-1];
      cout << sumx << endl;
   }
}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

