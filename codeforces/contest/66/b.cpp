#include <bits/stdc++.h>

using namespace std;

int main(){
 
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i < n; i++){
    cin >> v[i];
   }
  
  int ans = 0;
  for (int i=0; i < n; i++){


    int w = 1;
    for (int l=i+1; l < n; l++){
        if (v[l] > v[l-1]){
           break;
          }
        w++;
    }

    for(int r= i-1; r > -1; r--){
     
       if (v[r] > v[r+1]){
        break;
      }  
      w++;
     }  
    
   ans = max(ans, w);

  }
  
  cout << ans << "\n"; 


  return 0;
}
