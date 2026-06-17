#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
#define ll long long

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   int t; cin >> t;
   while (t--){
   double n,x,y,z; cin >> n >> x >> y >> z;
   
   int a = ceil(n / (x + y));
   int b = x * z;
   n -= b;
   b /= x;
   int q = ceil(n / (x + (y * 10))) + z;
   int ans = min(a, q);

   cout << ans << "\n";
 
   }


   return 0;
}

