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

   vector<vector<char>> grid(n, vector<char>(m));

   for (int r=0; r < n; r++){
   for (int c=0; c < m; c++){
         cin >> grid[r][c];
      }
   }
   
   int dx[] = {1, -1, 0, 0};
   int dy[] = {0, 0, -1, 1};

   for (int r=0; r < n; r++){
   for (int c=0; c < m; c++){
         if (grid[r][c] == 'W'){
            for (int i=0; i < 4; i++){
               int ri = r + dx[i];
               int ci = c + dy[i];

               if (ri > -1 && ci > -1 && ri < n && ci < m){
                  
                  if (grid[ri][ci] == 'S'){
                     cout << "No" << endl;
                     return;
                  }
                  
                  if (grid[ri][ci] != 'W') grid[ri][ci] = 'D';
               }
            }

         }
      }
   }
   
   cout << "Yes" << endl;

   for (int r=0; r < n; r++){
   for (int c=0; c < m; c++){
         cout << grid[r][c];
      }
     cout << endl;
   }
   

}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

