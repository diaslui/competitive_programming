#include <bits/stdc++.h>

using namespace std;

int main(){


   int n; cin >> n;
   vector<int> v(n);
   for (int i=0; i < n; i++){
     cin >> v[i];
     int ans = v[i];
     int carry = 0;
     for (int j=0; j < i; j++){
          if (j == 0){
            ans = v[j];
            continue;
          }  
          if (ans > v[j]){
              carry = ans - v[j];
              ans = ans + (carry / 2);
              carry = 0;             
             }
       

      }
     cout << ans << (i < n-1 ? " " : "\n";

   }


  return 0;
}
