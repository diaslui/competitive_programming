#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
typedef long long ll;
#define debug(x) cout << #x << " = " << x << "\n";

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
      
  int dx[4] = {0, 0, 1, -1};
  int dy[4] = {-1, 1, 0, 0};

   auto p = [&](int x, int y) -> int{
   return (y + x) % 2;
   };

   vector<vector<int>> grid(3, vector<int>(3, 1));
   for (int r=0; r < 3; r++){
   for (int c=0; c < 3; c++){
      int v; cin >> v;
      v %= 2;
      
      grid[r][c] = p(grid[r][c], v); 
      for (int i=0; i < 4; i++){
         int px = c + dx[i];
         int py = r + dy[i];

         if (px > -1 && py > -1 && px < 3 && py < 3){
           grid[py][px] = p(grid[py][px], v); 
         }

      }
   
   
   }

   }

for (int r=0; r < 3; r++){
   for (int c=0; c < 3; c++){
         cout << grid[r][c]; 
   }
   cout << endl;
   }

   return 0;
}

