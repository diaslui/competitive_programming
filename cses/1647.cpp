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

const int MAXN = 2 * 100000 + 5;
int v[MAXN];
int seg[MAXN * 4];

int build(int p, int l, int r){
   if (l == r) return seg[p] = v[l];
   int m = (l+r)/2;
   return seg[p] = min(build(2*p, l, m), build(2*p + 1, m+1, r));
}

int query(int p, int l, int r, int a, int b){
   
   if (l >= a && r <= b) return seg[p];
   if (l > b || r < a) return INF;

   int m = (l+r)/2;
   return min(query(p*2,l,m,a,b), query(p*2+1, m+1, r, a, b)); 
}


void solve(){
   int n, q; cin >> n >> q;
   for (int i=1; i <= n; i++){
      cin >> v[i];
   }
   build(1, 1, n);
   while (q--){
      int a,b; cin >> a >> b;
      cout << query(1, 1, n, a, b) << endl;
   }

}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

