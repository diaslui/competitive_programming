#include <bits/stdc++.h>

using namespace std;

vector<int> dsu(1e5 * 15);

int find(int x){ // find group

   if (dsu[x] < 0){
     return x;
   }
  
   return dsu[x] = find(dsu[x]);
}


int do_union(int x, int y){
  
   int py = find(y);
   int px = find(x);


    if (py == px) return 0;

   if (dsu[py] < dsu[px]){
      swap(py, px);
   }
   
     
   dsu[px] += dsu[py];
   dsu[py] = px;   
   return 1;
}

int dsu_size(int x){
   return abs(dsu[find(x)]);
  }


int main(){

 int n,m; cin >> n >> m;
 dsu.assign(n+1, -1);
 while(m--){

  int k0; cin >> k0;
  int gp = -1;
  while(k0--){
      int v; cin >> v;
      if (gp == -1){
         gp = v;
         continue;
       }
    
      do_union(gp, v);           
    
 
  }


 }


 for (int i=1; i <= n; i++){
   cout << dsu_size(i); 
   if (i == n){
    cout << "\n";
  }else{
   cout << " ";
  }
  }


 return 0;
}
