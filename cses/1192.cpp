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

vvi grid;
vvi visited;


int dr[4] = {0, 0, 1, -1};
int dc[4] = {1, -1, 0, 0};
   
int n, m;

void dfs(int y, int x){
      
      stack<pii> s;
      s.push({y, x});
      visited[y][x] = 1;

      while (!s.empty()){
   
         auto [r, c] = s.top();
         s.pop();

         for (int i=0; i < 4; i++){
         
         int pr = dr[i] + r;
         int pc = dc[i] + c;
         
         if (pr >= 0 && pc >=0 && pr < n && pc < m && grid[pr][pc] == 1 && !visited[pr][pc]){
            visited[pr][pc] = 1;
            s.push({pr, pc});
         } 

     }

   }
}



void solve(){
   cin >> n >> m;
   
   grid.assign(n, vi(m));
   visited.assign(n, vi(m, 0));

   for (int r=0; r < n; r++){
      for (int c=0; c < m; c++){
         char x; cin >> x;
         grid[r][c] = (x == '#' ? 0 : 1);
      }
   }
   int ans = 0;
   for (int r=0; r < n; r++){
      for (int c=0; c < m; c++){
         if (grid[r][c] == 0 || visited[r][c]) continue;
         dfs(r,c);
         ans++;
      }
   }


   cout << ans << endl;

}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

