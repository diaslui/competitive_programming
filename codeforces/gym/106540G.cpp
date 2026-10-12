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

    int n, m; cin >> n >> m;
    vector<int> edg[n];
    vector<int> visited(n, 0);
    for (int i=0;i < m; i++){
       int a,b; cin >> a >> b;
       edg[a].push_back(b);
       edg[b].push_back(a);
    }

    vector<vector<int>> groups;
    vector<int> grpn;

    vector<pair<int, int>> ans;
      
    auto dfs = [&](int x) -> void {
      
       stack<int> s;
       vector<int> grp;
       s.push(x);
       visited[x] = 1;
       while (!s.empty()){
            int e = s.top();
            grp.pb(e);
            s.pop();
            for (int v : edg[e]){
            if (!visited[v]){
               visited[v] = 1;
               s.push(v);
            }
            }
       }

      int swp = 0;
      
      if (!groups.empty() && groups[groups.size()-1].size() > grp.size()) swp = 1; 
     
      groups.pb(grp);
      grpn.pb(grp.size()-1);
      if (swp){
         swap(groups[groups.size()-1],groups[groups.size()-2]);
         swap(grpn[groups.size()-1],grpn[groups.size()-2]);
      }; 
    };


 

    
    for (int i=0; i < n; i++){
      if (visited[i]) continue;
      dfs(i);
    }

    int ok = 0;
    for (int i=0; i < groups.size()-1; i++){
         int curr = i+1;
         if (ok) break;
         for (int j=0; j < groups[i].size(); j++){
         
         while (grpn[curr] < 0){
               curr++;
               if (curr >= groups.size()){
                  ok = 1;
                  break;
               }
         }

         if (ok) break;


         ans.pb({groups[i][j], groups[curr][grpn[curr]]});
         grpn[curr]--;
         curr++;
         
         if (curr >= groups.size()){
            curr = i+1;
         }
   
         }

    }



    cout << ans.size() << endl;
    for (auto [a,b] : ans){
      cout << a << " "<< b << endl;
    }
}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

