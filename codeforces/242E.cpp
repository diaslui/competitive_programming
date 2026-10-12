#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAXN = 1000000 + 3;

ll seg[4 * MAXN];
ll lazy[4 * MAXN];
int v[MAXN];

void build(int p, int l, int r){
   lazy[p] = 0;
   if (l == r){
   seg[p] = v[l]; return;
   }

   int m = (l+r)/2;
   build(2*p, l, m); build(2*p+1, m+1, r);
   seg[p] = seg[2*p] + seg[2*p+1];
}

void apply(int p, int l, int r){
   if (lazy[p] != 0){
      seg[p] ^= (r-l+1) * lazy[p];
      if (l != r){
         lazy[2*p] ^= lazy[p];
         lazy[2*p+1] ^= lazy[p];
      }
      lazy[p] = 0;
   }
}


ll query(int p, int l, int r, int a, int b){
   if (r < a || l > b) return 0LL;
   apply(p, l, r);
   if (l >= a && r <= b){
      return seg[p];
   }

   int m = (l+r)/2;
   return query(2*p, l, m, a, b) + query(2*p+1, m+1, r, a, b);
}
void update(int p, int l, int r, int a, int b, int u){

   if (r < a || l > b) return;
   if (l >= a && r <= b){
      lazy[p] ^= u;
      apply(p, l, r);
      return;
   }
   
   int m = (l+r)/2;
   apply(2*p, l, m);
   apply(2*p+1, m+1, r);
   update(2*p, l, m, a,b,u); update(2*p+1, m+1, r, a, b, u);
   seg[p] = seg[2*p] ^ seg[2*p+1];
}


int main(){
   
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n; cin >> n;
   for (int i=1; i <= n; i++) cin >> v[i];
   build(1, 1, n);
   int q; cin >> q;
   while(q--){
   int t; cin >> t;
   if (t == 1){
      int a,b; cin >> a >> b;
      cout << query(1, 1, n, a, b) << endl;
     }else{
      int a,b,u; cin >> a >> b >> u;
      update(1, 1, n, a, b, u);
   }

   }


   return 0;
}
