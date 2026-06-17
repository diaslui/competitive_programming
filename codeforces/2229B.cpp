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
   
   int n, m; cin >> n;
   ll ans; ans = 0; m = 0; 
   vector<int> a(n); vector<int> b(n);
   for (int i=0; i < n; i++){
   cin >> a[i];
   }

    for (int i=0; i < n; i++){
     cin >> b[i];
     if (b[i] < a[i]){
      swap(b[i], a[i]);
     }

     ans += b[i];
      m = max(m, a[i]);
   }
      ans += m;
      cout << ans << endl;
    }


   


   return 0;
}

