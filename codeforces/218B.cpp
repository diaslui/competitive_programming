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

  int n, m; cin >> n >> m;
  priority_queue<int> maxn;
  priority_queue<int, vector<int>, greater<int>> minn;
  for (int i=0; i < m; i++){
      int v; cin >> v;
      maxn.push(v); minn.push(v);
  }

  int a, b; a = 0; b = 0;
  while (n--){
   int fmax = maxn.top();
   int fmin = minn.top();
   a += fmax;
   b += fmin;
   minn.pop();
   maxn.pop();

   fmax--; fmin--;
   if (fmin > 0){
   minn.push(fmin);
   }

   if (fmax > 0){
   maxn.push(fmax); 
   }
   

  }

   cout << a << " " << b << endl;
   return 0;
}

