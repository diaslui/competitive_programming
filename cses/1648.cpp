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

const int MAXN = 100000 * 2 + 5;
ll v[MAXN];
ll seg[4*MAXN];

ll build(int p, int l, int r){
   if (l == r) return seg[p] = v[l];

   int m = (l+r)/2;
   return seg[p] = 
     build(2*p, l, m)
     +
     build(2*p+1,m+1, r);
}

ll query(int p, int l, int r, int a, int b){

   if (l > b || r < a) return 0;
   if (l >= a && r <= b) return seg[p];

   int m = (l+r)/2;
   return query(2*p, l, m,a,b) + query(2*p+1, m+1, r, a,b);
}

void update(int p, int l, int r, int i, ll x){

   if (l==r){
   v[i] = x;
   seg[p] = x; 
   return;
   };

   int m = (l+r)/2;
   
   if (i <= m){
       update(p*2, l, m, i, x); 
   }else{
       update(p*2+1, m+1, r, i, x);
   }

   seg[p] = seg[p*2] + seg[p*2+1];
   return; 
}

void solve(){
   int n, q; cin >> n >> q;
   
   for (int i=1; i <= n; i++){
      cin >> v[i];
   }

  build(1, 1, n); 
  while (q--){
   ll y, a, b; cin >> y >> a >> b;
   if (y == 1){
      update(1, 1, n, a,b);
   }else{
      cout << query(1, 1, n, a, b) << endl;
   }


  }


}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

