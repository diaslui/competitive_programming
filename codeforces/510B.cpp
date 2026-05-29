#include <bits/stdc++.h>

using namespace std;

int main(){

 int m,n; cin >> n >> m;
 vector<vector<char>> grid(n, vector<char>(m));
 vector<vector<bool>> visited(n, vector<bool>(m, 0));
 for (int c=0; c < n; c++){
  for (int r=0; r < m; r++){
   cin >> grid[c][r];
   }
 }

 int dx[4] = {1, -1, 0, 0};
 int dy[4] = {0, 0, -1, 1};

 auto dfs = [&](auto self, int y, int x, int py, int px) -> bool {

  for (int i=0; i < 4; i++){

   int posx = dx[i] + x;
   int posy = dy[i] + y;

   if (posx < 0 || posy < 0 || posx >= m || posy >= n){
   continue;
    }
  
   if (grid[posy][posx] != grid[y][x]){
   continue;
   }

 
	  if (visited[posy][posx] && (posy != py || posx != px)){
    return 1;
  }




  if(!visited[posy][posx]){ 
     visited[posy][posx] = 1;
     if (self(self, posy, posx, y, x)){
       return 1;
     }
  }
  

 }
   return 0;
 };

 bool ans = 0;
 for (int c=0; c < n; c++){
  for (int r=0; r < m; r++){
   if (!visited[c][r]){
      visited[c][r] = 1;
      if (dfs(dfs, c, r, c, r)){
          ans = 1;
          break;
        }
     }
   }
 }


 if (ans){
  cout << "Yes";
}else{
  cout << "No";
 }

cout << "\n";
 return 0;
}
