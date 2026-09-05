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

vvi edg;
vi visited;

void dfs(int i){
   
   visited[i] = 1;
   stack<int> s;
   s.push(i);

   while (!s.empty()){
      int v = s.top();
      s.pop();

   for (int e: edg[v]){
      if (!visited[e]){
         visited[e] = 1;
         s.push(e);
      }
   }
   
   }

}

void solve(){
   int n, m; cin >> n >> m;
   edg.assign(n+1, vi());
   visited.assign(n+1, 0);
   for (int i=0; i < m; i++){
      int a,b; cin >> a >> b;
      edg[a].pb(b);
      edg[b].pb(a);
   }
   
   vi components;
   for (int i=1; i <= n; i++){
      if (visited[i]) continue;
      dfs(i);
      components.pb(i);
   }
   
   cout << components.size() - 1 << endl;
   for (int i=1; i < components.size(); i++){
      cout << components[0] << " " << components[i] << endl;
   }

}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

