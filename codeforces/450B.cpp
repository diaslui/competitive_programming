#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

const int MOD = 1e9 + 7;

int mod(ll x){
   return (x % MOD + MOD) % MOD;
}

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   int x, y, n; cin >> x >> y >> n; 

   int p = n % 6;
   if (p == 0) p = 6; 

   if (p == 1) {
       cout << mod(x) << endl;
       return 0;
   }
   if (p == 2) {
       cout << mod(y) << endl;
       return 0;
   }

   int z;
   for (int i = 3; i <= p; i++){
         z = mod(y - x);
         x = y; 
         y = z;
   }

   cout << mod(y) << endl;

   return 0;
}
