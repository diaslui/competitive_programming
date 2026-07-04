#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 1e9 + 7;

#define endl "\n"
#define dbg(x) cout << #x << " = " << x << "\n";
int main(){_

   int n, m; cin >> n >> m;
   vector<vector<int>> grid(n, vector<int>(m, 0));
   vector<vector<int>> visited(n, vector<int>(m, 0));
   for (int r=0; r < n; r++){
      for (int c=0; c < m; c++){
         char v; cin >> v;
         if (v == 'X') grid[r][c] = 1;
          } 
   }

   int dx[4] = {1, -1, 0, 0};
   int dy[4] = {0, 0, 1, -1};

   pair<int, int> start;
   pair<int, int> end;

   cin >> start.first >> start.second;
   cin >> end.first >> end.second;
   
   start.first--; start.second--;
   end.first--; end.second--;

   visited[start.first][start.second] = 1;
   queue<pair<int, int>> q;
   q.push(start);

   auto test = [&](int oy, int ox) -> bool{
      if (grid[end.first][end.second] == 1) return 1;
      int c = 0;
      for (int i=0; i < 4; i++){

       int py = dx[i] + end.first;
       int px = dy[i] + end.second;
      if (py > -1 && px > -1 && py < n && px < m){
      if(grid[py][px] == 0){
         c++;
      }
   

      }
      
      

      }
      
      if (!grid[oy][ox]) c--;

      return c >= 1;
   };
   
   while (!q.empty()){
   pair<int, int> f = q.front();
   q.pop();
    
   for (int i=0; i < 4; i++){
      
      int py = dx[i] + f.first;
      int px = dy[i] + f.second;
      
      if (py > -1 && px > -1 && py < n && px < m){
      
      if (py == end.first && px == end.second){
         cout << (test(f.first, f.second) ? "YES" : "NO") << endl;
         return 0;
      }else if (!visited[py][px] && grid[py][px] == 0){
         visited[py][px] = 1;
         q.push({py, px});
      }
   

      }
      

   }


   }
   
   cout << "NO" << endl;


   return 0;
}

