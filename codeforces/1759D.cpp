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

int czero(int x){
   string s; s = to_string(x);
   int c = 0;
   for (int i=s.size()-1; i >= 0; i--){
      if (s[i] != '0') break;
      c++;
   } 
   return c;
}

int up(int x){
   string a = to_string(x);
   a.push_back('0');

   return stoi(a);
}

void solve(){
   int n, m; cin >> n >> m;
      
   
      
}

int main(){_
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}

