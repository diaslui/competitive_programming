#include <bits/stdc++.h>

using namespace std;

vector<int> dsu;

int find(int x){
  
  if (dsu[x] < 0){
     return x;
  }
 
  return dsu[x] = find(dsu[x]);
}

bool do_union(int x, int y){

  int px = find(x);
  int py = find(y);

  if (px == py){
     return 0;
   }

  if (dsu[py] < dsu[px]){
    swap(py, px);
  }

  
  dsu[px] += dsu[py];
  dsu[py] = px;
  return 1;
}

int size(int x){
  return abs(dsu[find(x)]);
 }

int main(){
  int n, m; cin >> n >> m;
  dsu.assign(n+1, -1);

  long long ans = 1;
  
  while (m--){
   int x, y; cin >> x >> y;
   if (do_union(x, y)){
      ans *= 2;
    }
  }
 cout << ans << "\n";


 return 0;
}
