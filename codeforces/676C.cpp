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
   int n, k; cin >> n >> k;
   vector<char> v(n);
   for (int i=0; i < n; i++) cin >> v[i];
   
   
   int a, b; a = 0; b = 0;
   int l = 0;
   int ans = 0;
   for (int r=0; r < n; r++){
      if (v[r] == 'a'){
         a++;
      }else b++;
      
      while (min(a,b) > k){
       if (v[l] == 'a'){
         a--;
      }else b--;   
       l++;
      }
   
      ans = max(ans, r - l + 1);
   }
   cout << ans << endl;
}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

