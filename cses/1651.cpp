#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAXN = 100000 * 2 + 5;

ll seg[4*MAXN];
int v[MAXN];
ll lazy[4*MAXN];

void push(int p, int l, int r){
   if (lazy[p] != 0){
         seg[p] += (r-l+1) * lazy[p];
         if (l != r){
         lazy[2*p] += lazy[p]; 
         lazy[2*p+1] += lazy[p]; 
         }
         lazy[p] = 0;
     }
}

void build(int p, int l, int r){   
   if (l == r){
      seg[p] = v[l];
      return;
   }
   int m = (l+r)/2;
   build(2*p, l, m); build(2*p+1, m+1, r);
   seg[p] = seg[2*p] + seg[2*p+1];
}

ll query(int p, int l, int r, int a, int b){
   push(p, l, r);
   if (r < a || l > b) return 0;
   if (l >= a && r <= b) return seg[p];
   int m = (l+r)/2;
   return query(2*p, l, m, a, b) + query(2*p+1, m+1, r, a, b);
}
void update(int p, int l, int r, int a, int b, int u){
   push(p, l, r);
   if (r < a || l > b) return;
   if (l >= a && r <= b){
      lazy[p] += u;
      push(p, l, r);
      return;
   };

   int m = (l+r)/2;
   seg[p] = seg[2*p] + seg[2*p+1];
}

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n, q; cin >> n >> q;
   for (int i=1; i <= n; i++) cin >> v[i];
   build(1, 1, n);
   while (q--){

   int t; cin >> t;
   if (t == 1){
   int a, b, u; cin >> a >> b >> u;
   update(1, 1, n, a, b, u);
   }else{
   int k; cin >> k;
   cout << query(1, 1, n, k, k) << endl;
   }




   }   
  
   return 0;

}
