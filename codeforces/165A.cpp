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

   int n, ans; cin >> n; ans = 0;
   vector<pair<int,int>> v(n);
   for (int i=0; i < n; i++){
      int x, y; cin >> x >> y;
      v[i] = {x, y};
   }

   for (int i=0; i < n; i++){
   int r, l, low, up; r=0; l=0; low=0; up=0;
   auto [xi, yi] = v[i];

   for (int j=0; j < n; j++){
      if (j==i) continue;
      auto [xj, yj] = v[j];
      if (xi > xj && yj == yi) r++;
      if (xi <  xj && yj == yi) l++;
      if (xi == xj && yj > yi) low++;
      if (xi == xj && yj < yi) up++;
   }

   if (r && l && up && low){
      ans++;
   }
   }

   cout << ans << endl;


   return 0;
}

