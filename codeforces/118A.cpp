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

int main(){_

  string s; cin >> s;
  string ans = "";
  set<char> m;
  m.insert('a');
  m.insert('o');
  m.insert('y');
  m.insert('e');
  m.insert('u');
  m.insert('i');

  for (char c: s){
      if (m.count(tolower(c))) continue;
      ans += '.';
      ans += tolower(c);
  }
 
  cout << ans << endl;
   return 0;
}

