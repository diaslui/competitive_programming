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
   vvi grid(n, vector<int>(m));
   
   for (int r=0; r < n; r++){
   for (int c=0; c < m; c++){
      cin >> grid[r][c];
    }
   }
   
   int a = 0; int b = 0;
   int ans = 0;
   int stw = 0;
   for (int z=0; z <= 1; z++){
     
   int sp = z;
   int curr = 0;
   for (int r=0; r < n; r++){
   for (int c=0; c < m; c++){
      if (grid[r][c] % 2 != sp) curr++;
      if (sp) sp = 0;
      else sp = 1;
    }
   }
   
   if (z == 0){
      a = curr;
   }else{
      b = curr;
   }
   }
   
   if (b < a) stw = 1;
   ans = min(a, b);
   
   cout << ans << endl;
    
   for (int r=0; r < n; r++){
   for (int c=0; c < m; c++){
        if (grid[r][c] % 2 != stw) grid[r][c]++;
        if (stw) stw = 0; else stw = 1;
        cout << grid[r][c];
        if (c < m-1) cout << " "; 
    }
    cout << endl;
   }
   

}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

