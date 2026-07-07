#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 1e9 + 7;

#define fi first
#define se second
#define pb push_back
#define sz size

using pii = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;

#define endl "\n"
#define dbg(x) cout << #x << " = " << x << "\n";
#define all(x) x.begin(), x.end()

int main(){_

   string s; cin >> s;
   vi alf(26, -1);
   vi dist(26, 0);
   int n = s.sz();
   
   int ans = INF;
   for (int i=0; i < s.sz(); i++){
      
      int d = abs(i - alf[s[i] - 'a']);
      dist[s[i] - 'a'] = max(d, dist[s[i] - 'a']);

      alf[s[i] - 'a'] = i;
   }

   for (int i=0; i < alf.sz(); i++){
   
      int d = max(dist[i], abs(n - alf[i]));
      ans = min(d, ans);
   }

  
   
   cout << ans << endl;
   

   return 0;
}

