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
   if (n % 2 == 1){
      cout << -1 << endl;
      return 0;
     }

   int l = -1;
   for (int i=1; i <= n; i++){
      if (l == -1){
         l = i; continue;
      }
      cout << i << " " << l;
      l = -1;
      if (i == n){
         cout << endl;
      }else{
         cout << " ";
      }
   
   }



   return 0;
}

