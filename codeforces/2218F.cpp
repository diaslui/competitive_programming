#include <bits/stdc++.h>

using namespace std;

int main(){
 int t; cin >> t;
 while (t--){
  int x, y;
  cin >> x >> y;  
  int n = x + y; 
  int d = y - x;
  if (x > y || (n % 2 == 0 && x == 0)){
    cout << "NO \n";
    continue;
   }
 
  int m = 2*x + (n % 2);
 
  cout << "YES\n";
  for (int i=1; i < m; i++){
     cout << i << " " << i+1 << "\n";
  }

  for (int i= m + 1; i <= n; i++){
    cout << m << " " << i << "\n";
   } 


}

 return 0;
}
