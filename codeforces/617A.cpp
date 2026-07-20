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

  int x; cin >> x;
  
  int ans = x/5;
  x -= x / 5;
   
  if (x > 0){
  ans = x/4;
  x -= x/4;
  }
  
  if (x > 0){
  ans = x/3;
  x -= x/3;
  }

 if (x > 0){
  ans = x/2;
  x -= x/2;
  }

 if (x > 0){
  ans = x/1;
  x -= x/1;
  }
  cout << ans << endl;
   return 0;
}

