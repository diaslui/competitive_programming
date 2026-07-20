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
  vi v(101, 0); 
  int ans = 1;

  for (int i=0; i < n; i++){
   int x; cin >> x; 
   if (!ans) continue;
   
   if (x == 50){
      
      if (v[25] > 0){
         v[25]--;
      }else{
         ans = 0;
      }
   }


   if (x == 100){
      
      if (v[50] >= 1 && v[25] >= 1){
         v[25]--;
         v[50]--;
      }else if(v[25] >= 3){
         v[25] -= 3;
      }else{
         ans = 0;
      }
   }


   v[x]++;
  }

  cout << (ans ? "YES" : "NO") << endl;

   return 0;
}

