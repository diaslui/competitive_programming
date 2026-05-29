#include <bits/stdc++.h>

using namespace std;

int main(){
  long long n; cin >> n;
  if (n == 0){
   cout << 0 << "\n";
  }
  vector<long long> fib(2, -1);
  fib[0] = 0;
  fib[1] = 1;
  long long swap;
  for (int i=2; i <=n; i++){
   swap = fib[0];
   fib[0] = fib[1];
   fib[1] = swap + fib[0];
 }

 long long ans = fib[1] % 1000000007;
 cout << ans << "\n";

 return 0; 
}
