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
   
   vi ans(n+1, 0);

   ll cj, vj; cj = 0; vj = 0;

   for (int i=1; i <= n; i++){
      int ci, vi; cin >> ci >> vi;
      cj += ci; vj += vi;
      int ansi = cj - vj; 
      ans[i] = ansi;
   }

   int q; cin >> q; while (q--){
      int j; cin >> j;

      if (ans[j] > 0) cout << "COMPRA";
      else if (ans[j] < 0) cout << "VENDA";
      else cout << "NEUTRO";
      cout << endl;
   }
}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

