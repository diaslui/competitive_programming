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

   int n, x; cin >> n >> x;
   dp.assign(x+1, -1);
   dp[0] = 0;
   cout << "ok\n";
   for (int i=0; i < n; i++){
      int y; cin >> y;
      dp[y] = 1;
   }
  

  for (int i=1; i <= x; i++){
      int l = INF;
      for (int j=0; j < 3; j++){
         int sum = j + dp[i-1];
         if (sum != i) continue;
         l = min(l, sum);
      }

      dbg(l);
   }


   return 0;
}

