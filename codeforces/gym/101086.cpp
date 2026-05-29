#include <bits/stdc++.h>

using namespace std;

set<int> primes = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
vector<int> prefix(1e5 * 10 + 1, 0);

int main(){
  
 for (int i=1; i < prefix.size(); i++){
   int is = primes.count(__builtin_popcount(i));

  prefix[i] = prefix[i-1] + is;
 
  }
  
 int t; cin >> t;
 while (t--){
   int l, r; cin >> l >> r;
   int ans = prefix[r];

   if (l > 0){
      ans -= prefix[l-1];
    }

   cout << ans << "\n";
 
 }
  
 
 
  return 0;
}
