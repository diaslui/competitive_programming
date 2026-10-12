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

const int MAXN = 100000 * 2 + 5;

int color[MAXN];
vi edg[MAXN];
set<int> colors[MAXN];

int ans[MAXN];

void dfs(int i, int p){

   colors[i].insert(color[i]);

   for (int e: edg[i]){
      if (e == p) continue;      
      dfs(e, i);
      if (colors[e].size() > colors[i].size()) swap(colors[e], colors[i]); 
      
      for (int c: colors[e]) colors[i].insert(c);
   }
   ans[i] = colors[i].size();
}

void solve(){
   int n; cin >> n;
   
   for (int i=1; i <= n; i++) cin >> color[i];
   for (int i=1; i < n; i++){
      int a, b; cin >> a >> b;
      edg[a].pb(b);
      edg[b].pb(a);
   }
  

   dfs(1, 0);
   cout << ans[1];
   for (int i=2; i <=n; i++) cout << " " << ans[i];
   cout << endl;
}

int main(){_
   int t =1;
   while (t--) solve();
   return 0;
}

