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

   int a, b, c; a=0; b=0; c=0;
   int n; cin >> n;
   for (int i=0; i < n; i++){
      int x; cin >> x;
      if (x % 2 == 0) a = 1;
      else if (x % 3 == 0) b = 1;
      else c = 1;
   }


   if (a + b + c == 1) cout << "YES";
   else cout << "NO";
   cout << endl;

}

int main(){_
   int t = 1;
      while (t--) solve();
   return 0;
}

