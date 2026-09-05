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

   // cses 1090
   // There are n children who want to go to a Ferris wheel, and your task is to find a gondola for each child.
   //  Each gondola may have one or two children in it, and in addition, the total weight in a gondola may not exceed x. You know the weight of every child.
   //What is the minimum number of gondolas needed for the children
   int n, x; cin >> n >> x;
   vi v(n); for (int i=0; i < n; i++) cin >> v[i];
   sort(v.begin(), v.end());

   int l, r; l = 0; r = n-1;
   int ans = 0;
   while (l <= r){
      ll sum = v[l] + v[r];
      if (l == r) sum = v[l];
      ans++;
      r--;

      if (sum > x) continue;

      l++;
   }
   
   cout << ans << endl;
}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

