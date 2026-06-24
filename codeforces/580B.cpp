#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
typedef long long ll;
#define debug(x) cout << #x << " = " << x << "\n";

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n, d; cin >> n >> d;
   vector<pair<int, int>> v(n);
   for (int i=0; i < n; i++){
      int m, s; cin >> m >> s;
      v[i] = {m, s};
   }
  
   sort(v.begin(), v.end());
   ll ans = 0;
   ll c = 0;



return 0;
}

