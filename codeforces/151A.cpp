#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
typedef long long ll;
#define debug(x) cout << #x << " = " << x << "\n";

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n, k, l, c, d, p, nl, np;
   cin >> n >> k >> l >> c >> d >> p >> nl >> np;

   int totalml = k * l;
   int toasts = totalml / nl / n;

   int cuts = c * d;
   int pieces = cuts/n;

   int salt = p / np / n;

   int ans = min(salt, min(pieces, toasts));
   cout << ans << endl;



   return 0;
}

