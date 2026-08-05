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

   int n, m; cin >> n >> m;
   vi a(n); vi b(m);
   for (int i=0; i < n; i++) cin >> a[i];
   for (int i=0; i < m; i++) cin >> b[i];
   if (n < m * 2){
      cout << "NO" << endl; return;
   }
   int ans = 1;
   sort(a.begin(), a.end());
   sort(b.begin(), b.end());
   
   for (int i=0; i < m; i++){
      int v = b[i];

      auto xit = lower_bound(a.begin(), a.end(), v);
      auto yit = upper_bound(a.begin(), a.end(), v);
      if (xit == a.begin() || yit == a.end()){
         ans = 0; break;
      }

      int x = *(prev(xit));
      int y = *yit;

      a.erase(yit);
      a.erase(prev(xit));
   }


   
   cout << (ans ? "YES" : "NO") << endl;

}

int main(){_
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}

