#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
typedef long long ll;
#define debug(x) cout << #x << " = " << x << "\n";

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n; cin >> n;
   int lz, rz; 
   int lo, ro;
   lz = 0; rz = 0;
   lo = 0; ro = 0;

   for(int i=0; i < n; i++){
   int a, b;
   cin >> a >> b;

   if (a == 1){
      lo++;
   }else{
      lz++;
   }

   if (b == 1){
      ro++;
    }else{
      rz++;
    }

   }

   int ans = min(lo,lz) + min(ro,rz);
   cout << ans << endl;

   return 0;
}

