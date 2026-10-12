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
   int n, m; cin >> n >> m;
   
   map<string, string> w;
   while (m--){
      string a,b; cin >> a >> b;
      if (b.size() < a.size()) swap(a,b);
      w[a] = a;
      w[b] = a;
   }

   
   for (int i=0; i < n; i++){
      string c; cin >> c;
      if (i > 0) cout << " ";
      cout << w[c];
      if (i == n-1) cout << endl;
   }


}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

