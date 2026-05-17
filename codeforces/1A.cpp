#include <bits/stdc++.h>

using namespace std;

int main(){

 
  double m, n, a;
  cin >> m >> n >> a;

  double ms  = ceil(n/a);
  double ns = ceil(m/a);
  long long ans = ms *  ns;
  cout << ans << "\n";


 

 return 0;

}
