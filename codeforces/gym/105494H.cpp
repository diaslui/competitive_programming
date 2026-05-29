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

int dsu_size(int x){
 int px = find(x);
 return abs(dsu[px]);
 }

int main(){
  
  int n; cin >> n;
  dsu.assign(n+1, -1);
  int ans = -1;
  int idx = -1;
  for (int i=1; i <= n; i++){
   int v; cin >> v;
   if (v == 0){
    continue;
   } 
  do_union(v, i);
  }
  
  for (int i=1; i <= n; i++){
  
   if (dsu_size(i) >= ans){
    ans = dsu_size(i);
    idx = find(i);
  }
  } 

  cout << idx << " " << ans << "\n"; 

   return 0;
}
