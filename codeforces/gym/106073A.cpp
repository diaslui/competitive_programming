#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
typedef long long ll;
#define debug(x) cout << #x << " = " << x << "\n";

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n, m, ans; cin >> n >> m; ans = 0;
   vector<int> v(m, 0);
   for (int i=0; i < n; i++){
     for (int j=0; j < m; j++){
         int x; cin >> x;
         v[j] = max(v[j], x);
     }
   }

   for (int i: v){
      ans+= i;
   
   }

   cout << ans << endl;


   return 0;
}

