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

  int k; string s;
  cin >> k >> s;
  if (k == 1){
   cout << s << endl; return 0;
  }
  vi alf(26, 0);
  int count = 0;
  for (int i=0; i < s.sz(); i++){
   int idx = s[i] - 'a'; 
   alf[idx]++;
   count = max(alf[idx], count);
  }
  string base = "";
  for (int i=0; i < 26; i++){
      if (alf[i] == 0) continue;

      if (alf[i] % k != 0){
        cout << -1 << endl; return 0;
      }
      char c = i + 'a';
      int q = alf[i] / k;
      base.append(q, c);
  }

  for (int i=0; i < k; i++){
   cout << base;
  }
  cout << endl;

   return 0;
}

