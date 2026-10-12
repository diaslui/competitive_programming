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

   int n, d; cin >> n >> d;
   int ans = 0;
   string s; cin >> s;
   
   int aux = 0;
   int l = 0;
   int x = 1;
   
   while (x + l < n-1){
      int c = s[x+l] - '0';
      if (c == 1) aux = max(aux, x + l);
      
      if (x == d){
         if (aux == 0){
            cout << -1 << endl; return;
         }
         
         ans++;
         l = aux;
         x = 1;
         aux = 0;
         continue;
      }

      x++;
   }
   ans++; 
   cout << ans << endl;
}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

