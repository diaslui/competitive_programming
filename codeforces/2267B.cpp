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

   vector<int> freq(101);
   for (int i=0; i < n; i++){
   int idx; cin >> idx;
   freq[idx]++;
   }

   bool is = 1;
   while(is){
    is = 0;
      for (int i=100; i > 0; i--){
       if (freq[i] > 0){
       cout << " " <<  i;
       freq[i]--; 
       is = 1;
       }
       }
   }
   cout << endl;
}

int main(){_
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}

