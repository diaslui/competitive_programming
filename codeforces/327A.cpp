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

   int n, one, ans; cin >> n; one = 0; ans = 0;
   vector<int> v(n);
   for (int i=0; i < n; i++){
      cin >> v[i];
      if (v[i]==1) one++;
   }

   for (int i=0; i < n; i++){
      int a, c, d;a = 0; c = 0; d = 0;
      for (int j=i; j < n; j++){
         if (v[j] == 0){
            c++;
         }else{
            d++;
         }
         a = max(a, c + (one - d));
      }
      ans = max(a, ans);
      } 

   cout << ans << endl;

   return 0;
}

