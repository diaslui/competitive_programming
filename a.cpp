#include <bits/stdc++.h>

using namespace std;


typedef long long ll;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

#define endl "\n"
#define dgb(x) cout << #x << " = " << x << "\n";

int main(){_
   
   int t; cin >> t;
   while (t--){
   
      int n, c; cin >> n >> c;
      vector<int> a(n);
      vector<int> b(n);
      vector<int> sb(n);
      for (int i=0; i < n; i++){
         cin >> a[i];
      };
      for (int i=0; i < n; i++){
         cin >> b[i];
         sb[i] = b[i];
      };
        
      sort(a.begin(), a.end());
      sort(sb.begin(), sb.end());

      int ans, order; ans = 0; order = 0;
      for (int i=0; i < n; i++){
      
      int diff = a[i] - sb[i];
      if (diff < 0){
         ans = -1;
         break;
      }
      ans += diff;
      
      if (a[i] - diff != b[i]) order = 1;
      }

      if (ans == -1){
         cout << ans << endl; continue;
      }

      if (order == 1) ans += c;
      cout << ans << endl;

   }
   return 0;
}

