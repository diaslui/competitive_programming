#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
typedef long long ll;
#define debug(x) cout << #x << " = " << x << "\n";

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t= 1;
   while (t--){
   int ans, n, k; cin >> n >> k;
   int x, i; i = 0;
   while (2 << i <= x){
   x = 2 << i;
   i++;
   }
   cout << x << endl;
}
   return 0;
}

