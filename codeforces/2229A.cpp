#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
#define ll long long

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   int t; cin >> t;
   while (t--){
   
   int n; cin >> n;
   vector<int> v(n);
   int me, mi; me = 0; mi=1e7;
   for (int i=0; i < n; i++){
   cin >> v[i];
   me = max(me, v[i]);
   mi = min(mi, v[i]);
   }
   int ans = (mi + me +1)/2;
   cout << ans << endl;

   }


   return 0;
}

