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
   int a, b; a = 0; b = 0;
   vi y(n);
   for (int i=0;i < n; i++){
      int v; cin >> v;
      if (i==0) a = v;
      a = max(a, v);
      y[i] = v * 2;
   }
   
   for (int i=0; i < m; i++){
      int v; cin >> v;
      if (i==0) b = v;
      b = min(b, v);
   }

   if (b <= a){
      cout << -1 << endl; return 0;
   }

   for (int i=a; i < b; i++){
    for (int j=0; j < n; j++){
      if (y[j] <= i){
         cout << i << endl;
         return 0;
      }
    }

   }

  cout << -1 << endl; 

   

   return 0;
}

