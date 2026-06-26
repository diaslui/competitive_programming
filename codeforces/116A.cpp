#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
typedef long long ll;
#define debug(x) cout << #x << " = " << x << "\n";

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n, ans; cin >> n;
   int inside = 0;
   ans = inside;

   for(int i=0; i < n; i++){
     int a,b; cin >> a >> b;
     inside -= a;
     inside += b;

     ans = max(ans, inside);
   }


   cout << ans << endl;


   return 0;
}

