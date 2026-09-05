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

   int n, t; cin >> n >> t;
   
   map<int, priority_queue<pii, vector<pii>, greater<pii>>> m;
   priority_queue<pii, vector<pii>, greater<pii>> pq;
   vector<int> used(n, 0);
   vector<int> a(n);

   ll ans = 0;
   for (int i=0; i < n; i++) cin >> a[i];
   for (int i=0; i < n; i++){
      int p; cin >> p;
      pq.push({p, i});
      m[a[i]].push({p, i});
   }
   
   int q; cin >> q;
   while (q--){
      int x; cin >> x;
      if (x == 0){
         int p, idx; idx = -1;
         
         while (!pq.empty()){
            auto[sp, sidx] = pq.top();
            pq.pop();
            if (used[sidx]) continue;
         
            p = sp;
            idx = sidx;
            used[sidx] = 1;
            break;
         }
         if (idx == -1) continue;
         
         ans += p;
         continue;
      }

      int p, idx; idx = -1;
         
      while (!m[x].empty()){
         auto [sp, sidx] = m[x].top();
         m[x].pop();
         if (used[sidx]) continue;
         used[sidx] = 1;
         p = sp;
         idx = sidx;
         break;
      }
      if (idx == -1) continue;
      ans += p;
   }
      
   cout << ans << endl;
}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

