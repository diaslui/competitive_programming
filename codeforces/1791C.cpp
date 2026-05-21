#include <bits/stdc++.h>

using namespace std;

int main(){
  
   int t; cin >> t;
   while(t--){ 
 
  int n; cin >> n;
  vector<char> v(n);
  for(int i=0; i < n; i++){
    cin >> v[i]; 
  }
  
  int l = 0;
  int r = n-1;
  int ans = n;  

  while (l <= r){
  
  if (v[l] == v[r]){
      break;
  }

  l++;
  r--;
  ans -= 2;
  }

   cout << ans << "\n";
}

  return 0;
}
