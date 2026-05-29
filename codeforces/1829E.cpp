#include <bits/stdc++.h>

using namespace std;

int main(){
 int t; cin >> t;
 while (t--){
 int n,m; cin >> n >> m;
 vector<vector<int>> grid(n, vector<int>(m));
 vector<vector<bool>> visited(n, vector<bool>(m, 0));
 for (int i=0; i < n; i++){
  for (int j=0; j < m; j++){ 
     cin >> grid[i][j];
  }
 }
 
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, -1, 1};

auto dfs = [&](int y, int x) -> int {
        int c = grid[y][x];
	stack<pair<int,int>> s; 
	s.push({y, x});	
	visited[y][x] = 1;
        while(!s.empty()){
	auto [ty, tx] = s.top();
	s.pop();
	for (int i=0; i < 4; i++){

	   int px = tx + dx[i];
	   int py = ty + dy[i];
	   if (px > -1 && py > -1 && px < m && py < n && !visited[py][px] && grid[py][px] != 0){
 	s.push({py, px});
	visited[py][px] = 1;
	c += grid[py][px];
    }

         }
        }	

   return c;
}; 


  int ans = 0;
  for (int i=0; i < n; i++){
  for (int j=0; j < m; j++){ 
     if (grid[i][j] != 0 && !visited[i][j]){

     ans = max(ans, dfs(i,j));

}
  }
 }
 
cout << ans << "\n";

}

 return 0;
}
