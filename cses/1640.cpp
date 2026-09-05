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

  int n, k; cin >> n >> k;
  vector<pii> v(n); for (int i=0; i < n; i++){
      int x; cin >> x;
      v[i] = {x, i+1}; 
  }

  sort(v.begin(), v.end());
  int l = 0;
  int r = n-1;
  pii ans = {-1, -1};
  while (l < r){
      ll sum = v[l].fi + v[r].fi;
      if (sum > k){
         r--;
      } 
      if (sum < k){
         l++;
      }
      if (sum == k){
         ans = {v[l].se, v[r].se};
         break;
      }
  }

  if (ans.fi == -1){
      cout << "IMPOSSIBLE";
  }else{
      cout << min(ans.fi, ans.se) << " " << max(ans.fi, ans.se);
  }

  cout << endl;

}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

