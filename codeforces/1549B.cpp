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

   int n; cin >> n;
   string a; cin >> a;
   
   int ans = 0;
   for (int i=0; i < n; i++){
     char c; cin >> c;
     if (c == '0') continue; 
     if (a[i] == '0'){
         a[i] = '2';
         ans++;
     }else if (i > 0 && a[i-1] == '1'){
      a[i-1] = '2';
      ans++;
      
     }else if (i+1 < n && a[i+1] == '1'){
         a[i+1] = '2';
         ans++;
     }
   }

   cout << ans << endl;
}

int main(){_
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}

