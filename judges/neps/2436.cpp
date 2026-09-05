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
   
   int e, m, d; cin >> e >> m >> d;
   
   vector<pii> same(m);
   vector<pii> diff(d);
   vi grp(e+1);
   int ans = 0;

   for (int i=0; i < m; i++){
       int a, b; cin >> a >> b;
       same[i] = {a, b};
   }

   for (int i=0; i < d; i++){
       int a, b; cin >> a >> b;
       diff[i] = {a, b};
   }

   for (int i=0; i < e/3; i++){
      int a,b,c; cin >> a >> b >> c;
      grp[a] = i;
      grp[b] = i;
      grp[c] = i;
   }

   for (auto [a,b]: same){
      if (grp[a] != grp[b]) ans++;   
   }

   for (auto [a,b]: diff){
      if (grp[a] == grp[b]) ans++;   
   }
   cout << ans << endl;
}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

