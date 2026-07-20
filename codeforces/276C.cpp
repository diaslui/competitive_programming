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

int main(){_

   int n,q; cin >> n >> q;
   vi v(n);
   vi freq(n+1,0);
   for (int i=0; i < n; i++) cin >> v[i];
    
   for (int i=0; i < q; i++){
      int x, y; cin >> x >> y;
      freq[x-1]++; freq[y]--;
   }

   for (int i=1; i < n; i++){
      freq[i] = freq[i] + freq[i-1];
   }
   freq.pop_back();

   sort(freq.begin(), freq.end());
   sort(v.begin(), v.end());

   ll ans = 0;
   for (int i=0; i < n; i++){
      ans += (ll)v[i] * freq[i];
   }

   cout << ans << endl;



   return 0;
}

