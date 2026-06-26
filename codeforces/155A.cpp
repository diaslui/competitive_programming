#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
typedef long long ll;
#define debug(x) cout << #x << " = " << x << "\n";

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n, ans; cin >> n; ans = 0;

   int minx, maxx; 
   cin >> minx; n--;
   maxx = minx;

   while(n--){
   int v; cin >> v;
   
   if (v < minx){
      ans++; minx = v;
   }else if (v > maxx){
      ans++; maxx = v;
   }
   }

   cout << ans << endl;

   return 0;
}

