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
   using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vl = vector<ll>;
using vi = vector<int>;
using vvi = vector<vi>;
#define endl "\n"
#define dbg(x) cout << #x << " --> " << x << "\n";
#define all(x) x.begin(), x.end()

void solve(){

   int n; cin >> n;
   string ans = "";
   string s; cin >> s;

   vector<char> alf(26, '-');
   int l = -1;
   for (int i=0; i < n; i++){
      l = -1;
      int fnd = -1;
      for (int j=0; j < 26; j++){
         if (alf[j] == '-' && l == -1){
            l = j;
         }

         if (alf[j] == s[i]){
            fnd = j; break;
         }

      }
      if (fnd != -1){
         ans.pb('a' + fnd);   
      };
      
      alf[l] = s[i];
      ans.pb('a' + l);   
   }

   cout << ans << endl;

}

int main(){_
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}

