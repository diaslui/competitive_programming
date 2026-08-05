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

   auto getm = [&](int x) -> bool{
      
      int c = x;
      int i = 1;
      while (c < n){
         int s = x/pow(k, i);
         c += s;
         if (s == 0) break;
         i++;
      }
      return c >= n;

   };

   int high, low; low = 0; high = n;
   int ans = -1;
   while (low <= high){
      int mid = (low + high) / 2;
      bool r = getm(mid);
      if (r){
         high = mid - 1;
         ans = mid;
      }else{
         low = mid + 1;
      }
   }

   cout << ans << endl;


}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

