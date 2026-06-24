#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
typedef long long ll;
#define debug(x) cout << #x << " = " << x << "\n";

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   cout << fixed << setprecision(12);
   double n,p,v, ans; cin >> n; p = 0;
   for(int i =0; i < n; i++){
      cin >> v;
      p += v;
    }

   ans = p/n;
   cout << ans << endl;
   return 0;
}

