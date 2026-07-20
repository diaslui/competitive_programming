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

vi dsu;

int find(int x){
    if (dsu[x] < 0){
         return x;
    }

    return dsu[x] = find(dsu[x]);
}


int unite(int x, int y){

    int px = find(x);
    int py = find(y);
     
    if (px == py) return 0;

    if (dsu[py] < dsu[px]) swap(py, px);

    dsu[px] += dsu[py];
    dsu[py] = px;
    return 1;
}

void solve(){

   int n; cin >> n;
   int x, y; cin >> x >> y;
   dsu.assign(n+1, -1);
   vi v(n+1);
   for (int i=1; i <= n; i++){
       cin >> v[i]; 
   };

   for (int i=1; i <= n; i++){
      
      if (i + x <= n) unite(i,abs(i + x));
      if (i + y <= n) unite(i,abs(i + y));

   };

   int ans = 1;

   for (int i=1; i <= n; i++){
         
         if (find(i) != find(v[i])){
            ans = 0; break;
         }
   
   };


  


   cout << (ans ? "YES" : "NO") << endl;
}

int main(){_
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}

