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

   int h1, m1, s1;
   cin >> h1 >> m1 >> s1;

   int h2, m2, s2;
   cin >> h2 >> m2 >> s2;

   int a = (h1 * 3600) + (m1*60) + s1;
   int b = (h2 * 3600) + (m2*60) + s2;
   if (a < b){
      cout << "Player1";
   }else if (b < a){
      cout << "Player2";
   }else{
      cout <<  "Tie";
   }

   cout << endl;
}

int main(){_
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}

