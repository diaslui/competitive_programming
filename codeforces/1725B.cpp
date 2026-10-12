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

   vi v(n);
   for (int i=0; i < n; i++) cin >> v[i];
   sort(v.rbegin(), v.rend());
   int ans = 0; 
   
   int l = 0; int r = n-1;

   while (l <= r){
    if (v[l] > d){
      ans++; l++; continue;
    }
    int p = (d + v[l] - 1) / v[l]; p--;
    if (d/v[l] !=  p) p++;
    r -= p;
    if (r >= l) ans++;
    l++;

   }

   cout << ans << endl;

}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

