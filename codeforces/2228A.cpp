#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
typedef long long ll;
#define debug(x) cout << #x << " = " << x << "\n";

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   int t; cin >> t;
   while (t--){
   int n; cin >> n;
   vector<int> v(n);
   for (int i=0; i < n; i++){
    cin >> v[i];
   }
   int ans = 0;
   for (int i=0; i < n; i++){
     
   if (v[i] < 0) continue;
   if (v[i] % 3 == 0){
      v[i] = -1;ans++;
      continue;
   }
   for (int j=0; j < n; j++){
   if (j == i) continue;
   if (v[j] < 0) continue;
   if ((v[i] + v[j]) % 3 == 0){
      ans++;
      v[i] = -1, v[j] = -1;
      break;
   }

   }
   }
  cout << ans << endl; 
   }


   return 0;
}

