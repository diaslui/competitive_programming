#include <bits/stdc++.h>

using namespace std;


int main(){

   int n, m; cin >> n >> m;
   vector<vector<char>> grid(n, vector<char>(m));
   vector<vector<bool>> visited(n, vector<bool>(m, 0));
   
   pair<int, int> start;

   for (int y=0; y < n; y++){
    for (int x=0; x < m; x++){ 
    cin >> grid[y][x];
    if (grid[y][x] == 'A'){
     start = {y, x};
    }
    }
   }


  
   int dx[] = {-1, 1, 0, 0};
   int dy[] = {0, 0, 1, -1};


   //vector<path


   auto dfs = [&](auto self, int y, int x) -> bool{
        

         if (grid[y][x] == 'B'){
           return 1;
          }
 
 
         for (int i=0; i < 4; i++){
 
           int px = x + dx[i];
           int py = y + dy[i];
          
           if (py > -1 && px > -1 && py < n && px < m && !visited[py][px] && grid[py][px] != '#'){

               visited[py][px] = 1;
               return self(self, py, px);
            


               } 
           


         }
     
  



   }; 
  
 
   visited[start.first][start.second] = 1;
   cout << dfs(dfs, start.first, start.second) << "\n";




  return 0;
}
