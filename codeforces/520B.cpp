#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, m; cin >> n >> m;
  int ans = 0;
  while (m > n){
   ans++;
	 
   if (m % 2  == 0){
     m /= 2;
     continue;
   }
  
   m++;
  }
 
  ans += (n - m);
   
  cout << ans << "\n";

  return 0;
}
