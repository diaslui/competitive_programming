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

  int n; cin >> n;
  vi v(n);
  for (int i=0; i < n; i++) cin >> v[i];
  map<int, int> m;
  
  vector<pii> ans;
  int l=0; 
  for (int r=0; r < n; r++){
   m[v[r]]++;
   
   if (m[v[r]] == 2){
    ans.push_back({l+1, r+1});
    l = r+1; m.clear();
   }

   
  }

  if (ans.empty()){
   cout << -1 << endl; return 0;
  }
   
  ans[ans.size()-1].se += n - (ans[ans.size()-1].se);

  cout << ans.size() << endl;
  for (auto [x, y] : ans){
   cout << x << " " << y << endl;
  }
   

   return 0;
}

