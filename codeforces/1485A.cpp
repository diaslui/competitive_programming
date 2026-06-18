#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
typedef long long ll;
#define debug(x) cout << #x << " = " << x << "\n";

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while (t--){
   
   int a, b; 
   cin >> a >> b;
   int ans = 1e9;
   
   for (int s = 0; s <= 30; s++){
      int tb = b + s;
      if (tb == 1) continue;
      int ta = a;
      int d = 0;
      while (ta > 0){
         ta /= tb; d++;
      }
      ans = min(d+s, ans);

   }

   cout << ans << endl;
   }



   return 0;
}

