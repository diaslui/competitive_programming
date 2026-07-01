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

   map<string, int> m;
   string ans;
   int n; cin >> n;
   while (n--){
   string s; cin >> s;
   m[s]++;
   if (m[s] >= m[ans]){
   ans = s;
   }
   }
   cout << ans << endl;
   return 0;
}

