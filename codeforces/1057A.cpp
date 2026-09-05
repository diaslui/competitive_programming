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
   vi parent(n+2, -1);
   parent[1] = 1;
   for (int i=2; i <= n; i++){
      cin >> parent[i];
   }
   vi ans;
   auto dfs = [&](auto self, int x){
      ans.push_back(x);
      if (x == 1) return;
      
      return self(self, parent[x]);
   };

   dfs(dfs, n);
   for (int i=ans.size()-1; i >= 0; i--){
      cout << ans[i] << " ";
   }

   cout << endl;
}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

