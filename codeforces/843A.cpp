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


int main(){
  int n; cin >> n;
  dsu.assign(n, -1);
  vector<int> v(n); 
  vector<vector<int>> grp(n);
  map<int, int> s;

  for (int i = 0; i < n; i++){
     cin >> v[i];
     s[v[i]] = i;
   }

  sort(v.begin(), v.end());
  int q = n; 
  for (int i=0; i < n; i++){

   if (i == s[v[i]]){
     continue;
   } 

   if (do_union(i, s[v[i]])){
       q--;
    }
  }
  
  for (int i=0;i < n; i++){
   if (dsu[i] == -1){
     grp[i].push_back(i+1); 
     continue;
   } 
    grp[find(i)].push_back(i+1);
   }
   cout << q << "\n";
  for (auto vi : grp){
      if (vi.size() == 0) continue;
     cout << vi.size() << " ";
     for (int i=0; i < vi.size(); i++){
        cout << vi[i]; 
        cout << (i < vi.size()-1 ? " " : "\n");
    }
   }
  


 return 0;

}
