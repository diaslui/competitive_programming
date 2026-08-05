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
   vector<int> v(n);
   int ans = n;
   for (int i=0; i < n; i++){
      cin >> v[i];
      if (v[i] != 3 && v[i] != 0) ans--;
   }

   
   for (int i=0; i < n; i++){
      if (v[i] != 3) continue;
      int a, b; a = 0; b = 0;
      if (i - 1 > -1){
         a = v[i - 1];
      }

      if (i + 1 < n){
         b = v[i + 1];
      }

      int c = 0;
      
      if ((a == 1 && b == 2) || (a == 2 && b == 1)){
            continue;
      }
      
      if (b != 1 && a == 2){
         c = 1;
         ans--;
      }
   
      if (a != 2 && b == 3){
         ans--;
         c = 2;
      }

      v[i] = c;
   }

   for (int i=1; i < n; i++){
       if (v[i] == v[i-1] && (v[i] == 1 || v[i] == 2)) ans++;
   }


   cout << ans << endl;
}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

