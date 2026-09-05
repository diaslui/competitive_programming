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

bool valid(string curr){
    return __builtin_popcount(stoi(curr.substr(0, curr.size()/2))) == __builtin_popcount(stoi(curr.substr(curr.size()/2, curr.size())));   
}


void bt(string curr, set<string> &visited){
   if (visited.count(curr)) return;
      visited.insert(curr);
      for (int i=0; i < curr.size(); i++){

      curr[i] = curr[i] == '0' ? '1' : '0';
      bt(curr, visited);
      curr[i] = curr[i] == '0' ? '1' : '0';

   }



}


void solve(){

   int n; cin >> n;
   string x; x.append(n*2, '0');
   set<string> visited;
   bt(x, visited);

   for (string s: visited) if (valid(s)) cout << s << endl;
}

int main(){_
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}

