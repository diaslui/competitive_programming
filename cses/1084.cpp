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

  int n, m, k; cin >> n >> m >> k;
  vi v(n);
  vi a(m);

  for (int i=0; i < n; i++) cin >> v[i];
  for (int i=0; i < m; i++) cin >> a[i];

  sort(v.begin(), v.end());
  sort(a.begin(), a.end());
   

  int l, r; l = 0; r = 0;
  int ans = 0;
  while (l < m && r < n){

   if (a[l] >= (v[r] - k) && a[l] <= (v[r] + k)){
    r++; l++; ans++;
    continue;
   }

   if (a[l] < v[r] - k){
      l++;
   }else{
      r++;
   }


  } 
  

  cout << ans << endl;
   return 0;
}

