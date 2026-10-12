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
vi parent;

bool bfs(int a, int target){
   
   queue<int> q;
   q.push(a);
   visited[a] = 1;

   while (!q.empty()){
      
         int e = q.front();
         q.pop();

         for (int v: edg[e]){
            if (!visited[v]){
               q.push(v);
               visited[v] = 1;
               parent[v] = e;
               
               if (v == target) return true; 
  
            }
         }
      
   }
   
   return false;
}

void solve(){
   int n, m; cin >> n >> m;
   edg.assign(n+1, vi());
   visited.assign(n+1, 0);
   parent.assign(n+1, 0);

   parent[1] = -1;
   for (int i=0; i < m; i++){
      int a, b; cin >> a >> b;
      edg[a].pb(b);
      edg[b].pb(a);
   }
   
   if (!bfs(1, n)){
      cout << "IMPOSSIBLE" << endl; return;
   };

   vi ans;
    
   int a = n;
   while (parent[a] != -1){
      ans.pb(a);
      a = parent[a];
   }
   ans.pb(1);
   cout << ans.size() << endl;
   for (int i=ans.size()-1; i >= 0; i--){
      cout << ans[i];
      if (i == 0) cout << endl;
      else cout << " ";
   }


}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

