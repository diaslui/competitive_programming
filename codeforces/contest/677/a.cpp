#include <bits/stdc++.h>

using namespace std;

int main(){

 int n, h;
 cin >> n >> h;
 int ans = 0;
 while (n--){
  int v; cin >> v;
  if (v <= h){
   ans++;
  }else{
   ans+= 2;
  }
 
 }

 cout << ans << "\n";
 return 0;
}
