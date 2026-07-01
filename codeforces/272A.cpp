#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 1e9 + 7;

#define endl "\n"
#define dbg(x) cout << #x << " = " << x << "\n";

int main(){_

   int k,n, ans; cin >> n; k = 0; ans = 0;
   for (int i=0; i < n; i++){
    int v; cin >> v; k+= v;
   }

   n++;
   for (int i=1; i <= 5; i++){
      if ((k+i) % n != 1){
         ans++;
      }
   }

   cout << ans << endl;

   return 0;
}

