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
   int ans = 0;
   vi freq(26, 0);
   for (int i=0; i < s.sz(); i++){
      int idx = s[i] - 'a';
      freq[idx]++;
   }

   for (int i=0; i < 26; i++){
      if (freq[i] % 2 != 0){
         ans++;
      }
   }

   ans--;
   ans = max(ans, 0);
   if (ans % 2 == 0){
      cout << "First" << endl;
   }else{
      cout << "Second" << endl;
   }

   return 0;
}

