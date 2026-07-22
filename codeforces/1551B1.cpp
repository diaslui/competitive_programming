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

void solve(){

   string s; cin >> s;
   vector<int> freq(26, 0);
   for (char c : s){
      freq[c - 'a']++;
   }
   
   int color[2] = {0, 0};
   bool sw = 0;
   for (int i=0; i < 26; i++){
      if (freq[i] == 0) continue;
      if (freq[i] > 1){
         color[0]++;
         color[1]++;
         continue;
      }else{
        color[sw]++;
      }
      
     sw = !sw;
   }

   cout << min(color[0], color[1]) << endl;

}

int main(){_
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}

