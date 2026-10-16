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
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vl = vector<ll>;
using vi = vector<int>;
using vvi = vector<vi>;
#define endl "\n"
#define dbg(x) cout << #x << " --> " << x << "\n";
#define all(x) x.begin(), x.end()

const int MAXN = 1000000 + 2;

struct Node{
   int match = 0;
   int open = 0;
   int clsd = 0;
};

Node v[MAXN];
Node seg[4*MAXN];

Node match(Node a, Node b){
   Node c;
   c.match += a.match;
   c.match += b.match;

   int minm = min(a.open, b.clsd);
   c.match += minm;

   c.open = a.open + b.open;
   c.clsd = a.clsd + b.clsd;

   c.open -= minm;
   c.clsd -= minm;
   return c;
}

Node query(int p, int l, int r, int a, int b){
   
   if (l > b || r < a) return {0, 0, 0};
   if (l >= a && r <= b){
      return seg[p];
   }

   int m = (l + r) / 2;
   
   return match(query(2*p, l, m, a, b), query(2*p+1, m+1, r, a, b));
}

void build(int p, int l, int r){
   if (l == r){
      seg[p] = v[l];
      return;
   }
   
   int m = (l + r)/2;
   build(2*p, l, m);
   build(2*p+1, m+1, r);
   
   seg[p] = match(seg[2*p], seg[2*p+1]);
}


void solve(){

   string s; cin >> s; 
   
   for (int i=1; i <= s.size(); i++){
      if (s[i-1] == '('){
         v[i].open++;
      }else{
        v[i].clsd++;
      }
   }
  
  build(1, 1, s.size());
  int q; cin >> q;

  while (q--){
     int a, b; cin >> a >> b;
     cout << query(1, 1, s.size(), a, b).match * 2 << endl; 
  }
}

int main(){_
   int t = 1;
   while (t--) solve();
   return 0;
}

