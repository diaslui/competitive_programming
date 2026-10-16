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

   string s; cin >> s;

   string m = "Yes";
   int k = 0;

   if (s[0] == 'Y'){
      k = 0;
   }else if (s[0] == 'e'){
      k = 1;
   }else if (s[0] == 's'){
      k = 2;
   }else{
      cout << "NO" << endl; return;
   }


   for (int i=1; i < s.size(); i++){
      k++;
      if (s[i] != m[k % 3]){
      cout << "NO" << endl; return;
     }

   }

   cout << "YES" << endl;
}

int main(){_
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}

