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
   int n, ans; cin >> n;

   int c1, c2, c0;
   c1 = 0; c2 = 0; c0 = 0;
   for (int i=0; i < n; i++){
    int v;
    cin >> v;
    if (v == 0) c0++;
    if (v == 1) c1++;
    if (v == 2) c2++;
   }

   ans = min(c1,c2);
   c1 -= ans;
   c2 -= ans;
   ans += (c1/3);
   ans += (c2/3);
   ans += c0;

   cout << ans << endl; 
   }


   return 0;
}

