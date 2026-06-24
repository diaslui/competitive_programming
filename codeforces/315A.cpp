#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
typedef long long ll;
#define debug(x) cout << #x << " = " << x << "\n";

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n, ans; cin >> n; ans = n;
   vector<pair<int, vector<int>>> v(n+1, {0, vector<int>()});
   for (int i=1; i <= n; i++){
      int a, b; cin >> a >> b;   
      v[i].first = a;   
      v[i].second.push_back(b);
   }
  
   for (int i=1; i <= n; i++){
    int x = v[i].first;int  founded = 0;
     
   for (int j=1; j <= n; j++){
   if (i == j) continue;
   if (founded) break;
      for (int k: v[j].second){
      if (k == x){
         ans--;
         founded = 1;
      }
   

      }
   

   }
   }
  cout << ans << endl;
  return 0;
}

