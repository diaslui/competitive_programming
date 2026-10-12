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

   int a,b; cin >> a >> b;
   vector<int> v(a);
   for (int i=0; i < a; i++) cin >> v[i];
   sort(v.begin(), v.end());

   auto test = [&](int &x){

      int l = 0;
      int r = a-1;
      
      int aux = 0;
      while (l <= r){
         int mid = (l+r)/2;

         if (v[mid] > x){
            r = mid - 1;
            continue;
         }

         l = mid + 1;
         aux = mid + 1;
      }
      
      return aux;

   };
   
   while(b--){
      int x; cin >> x;
      cout << " ";
      cout << test(x);
      if (b == 0){
         cout << endl;
      }
   }


}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

