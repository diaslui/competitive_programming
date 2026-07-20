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

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);


   int b, g; cin >> b >> g;
   int m = min(b, g) == b;
   int i = min(g, b) * 2;
   while (i--){
      if (m) {
      cout << "G";
      g--;
      }
   else{
      cout << "B";
      b--;
      };
      m = !m;
   }
    
 
   
   for (int i=0; i < b; i++) cout << "B";
   for (int i=0; i < g; i++) cout << "G";

   cout << endl;
}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

