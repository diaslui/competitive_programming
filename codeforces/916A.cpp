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

bool lucky(int n){
   return n % 10 == 7 || n / 10 == 7;
}

void solve(){

   int x; cin >> x;
   int hh, mm; cin >> hh >> mm;
   if (lucky(hh) || lucky(mm)){
      cout << 0 << endl; return;
   }


   int ans = 0;
   while (!lucky(hh) &&  !lucky(mm)){
      ans++;
      mm -= x;

      if (mm < 0){
         mm += 60;
         hh--;
      }

      if (hh < 0){
          hh = 23;
      }
   }

   cout << ans << endl;

}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

