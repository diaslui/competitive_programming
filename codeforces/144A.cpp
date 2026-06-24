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
   int minx, maxx, ans;
   int idmin, idmax;
   for (int i=1; i <= n; i++){
      int v; cin >> v;
      if (i == 1){
        idmin = 1; idmax = 1;
        minx = v; maxx = v;continue;
      }

      if (v <= minx){
         minx = v;
         idmin = i;
      }

      if (v > maxx){
           maxx = v; idmax = i;
         }

   }

   ans = (n - idmin) + abs(1 - idmax);
   if (idmax >= idmin){
      ans--;
   }

   cout << ans << endl;

   return 0;
}

