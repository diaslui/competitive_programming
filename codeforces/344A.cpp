#include <bits/stdc++.h>

using namespace std;

int main(){
   
  int n; cin >> n;
  int ans = 1;
  int last;
  cin >> last;
  for (int i=1; i < n; i++){
   int a; cin >> a;
   if (a != last){
       ans++;
    }
   last = a;
 }

 cout << ans << "\n";
 
  return 0;
}
