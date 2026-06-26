#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
typedef long long ll;
#define debug(x) cout << #x << " = " << x << "\n";

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   int k,l, m, n, d; 
   cin >> k >> l >> m >> n >> d;
   int ans = 0;
   ans += d/k;
   ans += d/l;
   ans += d/m;
   ans += d/n;  
   
   ans -= d/lcm(k,l);
   ans -= d/lcm(k,m);
   ans -= d/lcm(k,n);
   ans -= d/lcm(l,m);
   ans -= d/lcm(l,n);
   ans -= d/lcm(m,n);

   ans += d/lcm(k, lcm(l, m));
   ans += d/lcm(k, lcm(n, m));
   ans += d/lcm(n, lcm(l, m));
   ans += d/lcm(n, lcm(l, k));

   ans -= d/lcm(k, lcm(l, lcm(m,n)));


   cout << ans << endl;

   return 0;
}

