#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"


int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   int ans = 0;
   int p = 0;
   
   int n; cin >> n;
   while (n--){
    int v; cin >> v;
    if (v == -1){
      if (p){
        p--;
        continue;
      }
      ans++;
    }else{
     p+= v;
   } 
  }
  
  cout << ans << endl;
  return 0;
}

