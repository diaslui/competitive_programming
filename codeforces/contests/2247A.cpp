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
   vector<int> v(n);
   bool ans = 1;
   int a, b; a = 0; b = 0;
   for (int i=0; i < n; i++){
      cin >> v[i];
      if (v[i] < 0) b++; else a++;
   }

   if (a == b) ans = 1;

   if (a != b){

      int o;
      if (b > a){
         o = -1;
      }else{
         o = 1;
      }
      int maxseq = -1;
      int curr = 0;
      
      for (int i=0; i < n; i++){   
         if (v[i] == o){
            curr++;
         }else{
            maxseq = max(maxseq, curr);
            curr = 0;
         }
      }
      maxseq = max(maxseq, curr);
     
      ans = maxseq % 2 == 0 && maxseq >= n/2 - abs(a - b);
   }
  
   if (n % 2 != 0) ans = 0;
   if (min(a, b) == 0) ans = 0;

   cout << (ans ? "YES" : "NO") << endl;
}

int main(){_
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}

