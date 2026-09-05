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
   
   priority_queue<pii> pq;
   int n, k; cin >> n >> k;
   for (int i=0; i < n; i++){
      int x; cin >> x; pq.push({x, -i});
   }
  
   while (!pq.empty()){
      auto [x, i] = pq.top();
      pq.pop();
      x -= k;

      if (x <= 0){
         cout << (abs(i)+1) << " ";
      }else{
         pq.push({x, i});
      }
   }

   cout << endl;
}

int main(){_
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}

