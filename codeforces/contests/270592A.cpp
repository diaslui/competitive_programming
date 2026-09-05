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

void bt(string curr, set<string> &visited){
   if (visited.count(curr)) return;
   visited.insert(curr);
   for (int i=0; i < curr.size(); i++){
      curr[i] = curr[i] == '1' ? '0' : '1';
      bt(curr,visited);
      curr[i] = curr[i] == '1' ? '0' : '1';
   }
}


void solve(){
   set<string> visited;
   int n; cin >> n;
   string x; x.append(n, '0');
   bt(x, visited);
   for (string s: visited) cout << s << endl;
}

int main(){_
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}

