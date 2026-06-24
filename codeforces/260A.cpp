#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
typedef long long ll;
#define debug(x) cout << #x << " = " << x << "\n";

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   string a;
   int b, n, ans; cin >> a >> b >> n;
   ans = 0;
   for (int i=0; i < 10; i++){
      string s = a;
      s.append(to_string(i));
      int v = stoll(s);
      if (v % b == 0){
         ans = v;
          break;
      }
   }

   if (!ans){cout << -1 << endl; return 0;}
   cout << ans;
   for (int i=0;i < n-1; i++){
      cout << 0;
   }
   cout << endl;
   return 0;
}

