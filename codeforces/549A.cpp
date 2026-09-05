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

   int x, y; cin >> x >> y;
   vector<vector<char>> grid(x, vector<char>(y));
   
   for (int l=0; l < x; l++){
   for (int r=0; r < y; r++){
      cin >> grid[l][r];
   }}

   int ans = 0;
   for (int l=0; l < x-1; l++){
   for (int r=0; r < y-1; r++){
   
      char a = grid[l][r];
      char b = grid[l][r+1];
      char c = grid[l+1][r];
      char d = grid[l+1][r+1];
      
      int cn = 0;
      if (a == 'f' || b == 'f' || c == 'f' || d == 'f') cn++;
      if (a == 'a' || b == 'a' || c == 'a' || d == 'a') cn++;
      if (a == 'c' || b == 'c' || c == 'c' || d == 'c') cn++;
      if (a == 'e' || b == 'e' || c == 'e' || d == 'e') cn++;
         
      if (cn != 4) continue;
      
      if (a == b || a == c || a == d) continue;
      if (b == c || b == d) continue;
      if (c == d) continue;
      ans++;
   }}

   cout << ans << endl;
}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

