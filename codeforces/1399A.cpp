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
   vi v(n);
   for(int i=0; i < n; i++) cin >> v[i];
   sort(v.begin(), v.end());
   int ans = 1;
   for (int i=0; i < n-1; i++){
      if (abs(v[i] - v[i+1]) > 1){
      ans = 0; break;
      }
   }

   cout << (ans ? "YES" : "NO") << endl;

}

int main(){_
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}

