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
   int n, k, c; cin >> n >> k; c=0;
   string s; cin >> s;
   for (int i=0; i < n-k; i++){
      if (s[i] == '1') c++;
   }

   cout << (c % 2 == 0 ? "YES" : "NO");
   cout << endl;
}
   return 0;
}

