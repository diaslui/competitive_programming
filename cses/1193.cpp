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

vector<vector<char>> grid;
vector<vector<pii>> parent;
int n, m;

int dc[4] = {0, 0, 1, -1};
int dr[4] = {1, -1, 0, 0};

string path;
pii start;
pii eend;

bool bfs(){

   queue<pii> q;
   grid[start.fi][start.se] = '#';
   q.push({start.fi, start.se});

   while (!q.empty()){

       auto [r, c] = q.front();
       q.pop();

       for (int i=0; i < 4; i++){

         int nr = dr[i] + r;
         int nc = dc[i] + c;
         
         if (nr >= 0 && nc >= 0 && nr < n && nc < m && grid[nr][nc] != '#'){
             parent[nr][nc] = {r, c}; 
             if (grid[nr][nc] == 'B') return true;
             grid[nr][nc] = '#';
             q.push({nr, nc});

         }


       }

   }

   return false;
   
}

void build(pii x){

    auto [r, c] = x;
    auto [pr, pc] = parent[r][c];
    
    if (pr == -1 && pc == -1) return;  
    int dr, dc;

    dr = r - pr;
    dc = c - pc;
    char mov;
    if (dr == 0){
      if (dc == 1) mov = 'R';
      else mov = 'L';
    }else{
      if (dr == 1) mov = 'D';
      else mov = 'U';
    }
    
    path.pb(mov);
   
    return build(parent[r][c]);
}
   
void solve(){
   cin >> n >> m;
   grid.assign(n, vector<char>(m));
   parent.assign(n, vector<pii>(m));
  
   for (int r=0; r < n; r++){
   for (int c=0; c < m; c++){
      cin >> grid[r][c];
      if (grid[r][c] == 'A') start = {r,c};
      else if (grid[r][c] == 'B') eend = {r,c};
   }
   }

   parent[start.fi][start.se] = {-1, -1};
   if (!bfs()){
      cout << "NO" << endl; return;
   }
   
   build(eend);
   reverse(all(path)); 
   cout << "YES" << endl;
   cout << path.size() << endl;
   cout << path << endl; 
}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

