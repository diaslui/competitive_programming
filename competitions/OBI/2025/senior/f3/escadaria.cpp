#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;

int main(){
   
   int n; cin >> n;
   vector<int> v(n); 
   for (int i=0; i < n; i++) cin >> v[i];


   int l = 0;
   int r1 = INF;
   int r2 = 0;
   for (int r=0; r < n; r++){
      
      if (v[r] != -1){
         r2 = r;

         while (l < r2){
            int dist = min(abs(l-(r1 == INF ? INF : v[r1])), abs(l-v[r2]));
            v[l] = dist;
            l++;
         }
         l = r + 1;            
         r1 = r2; 
      }

   }


   for (int i=0; i < n; i++){
      cout << v[i];
      if (i < n-1) cout << " ";
   }

   cout << "\n";

   return 0;

}
