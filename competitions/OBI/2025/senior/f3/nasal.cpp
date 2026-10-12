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
   
   int n,k; cin >> n >> k;
   vector<tuple<int, int, int>> v(n);
   for (auto &[a, b, c] : v){ 
      cin >> b >> a; c = 0;


   };
  
   int ans = 0;
   int curr = 0;

   sort(v.rbegin(), v.rend());
   
   int i=0;
   for (auto &[a,b,c] : v){
      if (i < k){
      c = 1;
      curr += b;
      ans = max(curr, ans);
      }else{
      swap(a, b);
      }
      i++;   
      }

   sort(v.rbegin(), v.rend());

   int B = 0;


   for (auto &[a,b,c] : v){
         if (c == 1) continue;
         curr += a;
         curr -= B;
         ans = max(curr, ans);
         B = b;

   }

   cout << ans << endl;


}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

