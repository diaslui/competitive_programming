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
   int parent[n+1];

   for (int i=1; i <= n; i++){
      cin >> parent[i];
   }

   auto dfs = [&](int &i) -> int{
      
      unordered_set<int> m;
      stack<int> s;
      s.push(i);
      m.insert(i);

      while (!s.empty()){
         
         int v = s.top();
         s.pop();

         if (m.count(parent[v])){
            return parent[v];
         }

         m.insert(parent[v]);
         s.push(parent[v]);
      }

      return 0;


   };
   

   for (int i=1; i <= n; i++){
      if (i > 1) cout << " ";
      cout << dfs(i);
      if (i == n) cout << endl;
   }


}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

