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

  int t[4];
  int i1, i2, m1, m2;
  m1=0; m2=0;
  for (int i=0; i < 4; i++){
      cin >> t[i];

      if (t[i] >= m1){
         m1 = t[i]; i1 = i;
      }
  }

 
  for (int i=0; i < 4; i++){
      if (i == i1){
         continue;
      }

      if (t[i] >= m2){
         m2 = t[i]; i2 = i;
      }
  }

  bool ans = (i1 > 1 && i2 > 1) || (i2 <= 1 && i1 <= 1);
  cout << (ans ? "NO" : "YES") << endl;
}

int main(){_
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}

