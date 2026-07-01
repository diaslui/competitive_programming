#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 1e9 + 7;

#define endl "\n"
#define dbg(x) cout << #x << " = " << x << "\n";

int main(){_

   int n; cin >> n;
   vector<int> v(n);
   for (int i=0; i < n;i++){
      cin >> v[i];
   }

   vector<int> win; 

   sort(v.begin(), v.end()); 
   int l, ans; l =0; ans = 0;
   for (int r=0; r < n; r++){
            
        win.push_back(v[r]);


         while (win[win.size()-1] - win[0] > 5){
         win.erase(win.begin());
         l++;
        }  


        ans = max(ans, r - l + 1);
         
   }

   cout << ans << endl;
   return 0;
}

