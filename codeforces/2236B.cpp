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

   int t; cin >> t; while (t--){
   int n, k; cin >> n >> k;
   string s; cin >> s;
   vector<int> v(k, 0);
   for (int i=0; i < n; i++){
      if (s[i] == '1'){
         v[i%k]++;
      }
   }

   int ans = 1;
   for (int i=0; i < v.size(); i++){
      if (v[i] % 2 == 0) continue;
      ans = 0; break;
   }

   if (ans){
      cout << "YES" << endl;
   }else{
      cout << "NO" << endl;
   }
  

}
   return 0;
}

