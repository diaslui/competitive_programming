#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 1e9 + 7;

#define fi first
#define se second
#define pb push_back
#define sz size

using pii = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;

#define endl "\n"
#define dbg(x) cout << #x << " = " << x << "\n";
#define all(x) x.begin(), x.end()

void solve(){

   string salf, s; cin >> salf >> s;
   vector<int> alf(26);
   for (int i = 1; i <= 26; i++){
      char c = salf[i-1];
      alf[c - 'a'] = i;
   }

   int ans = 0;
   int curr = -1;

   curr = alf[s[0] - 'a'];
   for (char c: s){ans += abs(curr - alf[c - 'a']); curr = alf[c - 'a'];
   }
   
   cout << ans << endl;
}

int main(){_
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}

