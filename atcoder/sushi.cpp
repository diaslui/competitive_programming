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
   int n,m; cin >> n >> m;
   vi v(n);
   vi x(m);
   map<int, int> idx;
   for (int i=0; i < n; i++){
      cin >> v[i];
      idx[v[i]] = i+1;
   };
   for (int i=0; i < m; i++) cin >> x[i];
   
   sort(all(v));

   for (int i=0; i < m; i++){
      
   auto it = lower_bound(v.begin(), v.end(), x[i]);
   if (it == v.begin()){
      cout << -1 << endl;
      continue;
   }
    cout << idx[*it] << endl;

   }

 }



int main(){_
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}

