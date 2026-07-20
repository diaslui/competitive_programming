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

vi dp;

int main(){_

  int n; cin >> n; 
  dp.assign(n+1, -1);
  dp[0] = 1;
  for (int i=1; i <= n; i++){
   int l = 0;
   for (int j=1; j <= 6; j++){
      
      int idx = i - j;
      if (idx < 0) continue;
      l = dp[idx] % MOD + l % MOD; 

   }
   dp[i] = l % MOD;
  }

  cout << dp[n] << endl;
   return 0;
}

