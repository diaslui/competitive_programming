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

   int n, x; cin >> n >> x;
   vi v(n);
   ll total = 0;
   for (int i=0; i < n; i++){
      cin >> v[i]; total += v[i];
   }
   if (total == x){
      cout << "NO" << endl; return;
   }
   
   cout << "YES" << endl;

   for (int i=0; i < n; i++){
      if (v[i] == x){
         swap(v[i], v[i+1]);
      }
      
      cout << v[i] << " ";
      x -= v[i];
   }

   cout << endl;
  

  }

int main(){_
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}

