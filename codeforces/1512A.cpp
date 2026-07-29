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

   int n; cin >> n;
   
   int ai, bi; ai = 0; bi = 0;
   int a, b; a = 0; b = 0;
   int freqa, freqb; freqa = 0; freqb = 0;

   for (int i=0; i < n; i++){
        int x; cin >> x;
  
        if (x != b && a == 0){
            a = x;
            freqa++;
            ai = i;
            continue;
        }
        if (x != a && b == 0){
            b = x;
            freqb++;
            bi = i;
            continue;
        }

        if (x == a){
            freqa++;
            ai = i;
        }else{
            freqb++;
            bi = i;
        }
   }

   if (freqb < freqa){
      cout << bi + 1 << endl;
   }else{
      cout << ai + 1 << endl;
   }

}

int main(){_
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}

