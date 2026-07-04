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

int main(){_

  int n; cin >> n;
  vi v(n);
    for (int i=0; i < n; i++){
      cin >> v[i];
  }
   pii ans = {n, 1};
   int diff = abs(v[n-1] - v[0]);

   for (int i=0; i < n-1; i++){
      if (abs(v[i] - v[i+1]) < diff){
         diff = abs(v[i] - v[i+1]);
         ans = {i+1, i+2};
      }
   }

   cout << ans.fi << " " << ans.se << endl;
   return 0;
}

