#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100000;

typedef long long ll;

ll seg[MAXN * 4 + 5];
ll lazy[MAXN * 4 + 5];

void apply(int p, int l, int r){

   if (lazy[p] != 0){
	seg[p] += (r-l+1) * lazy[p];
   	if (r != l){
	  lazy[2*p] += lazy[p]; lazy[2*p+1] += lazy[p]; 
	}
   	
	lazy[p] = 0;
   }
}

void update(int p, int l, int r, int a, int b, int u){
	if (l > b || r < a) return;
	if (l >= a && r <= b){
	   lazy[p] += u;
	   apply(p, l, r);
	   return;
	}

	int m = (l+r)/2;
	update(2*p, l, m, a, b, u);
	update(2*p+1, m+1, r, a, b, u);
	apply(2*p, l, m);
	apply(2*p, m+1, r);
	seg[p] = seg[2*p] + seg[2*p+1];
}

ll query(int p, int l, int r, int a, int b){
   if (r < a || l > b) return 0LL;
   apply(p, l, r);
   if (l >= a && r <= b) return seg[p];
   
   int m = (l+r)/2;
   return query(2*p, l, m, a, b) + query(2*p+1, m+1, r, a, b);
}

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   
   while (t--){
     fill(seg, seg+ 4 * MAXN + 5, 0LL);
     fill(lazy, lazy + 4 * MAXN + 5, 0LL);
      int n, q; cin >> n >> q;

      while (q--){
      int x; cin >> x;
      if (x == 0){
         int p, q, u; cin >> p >> q >> u;
         update(1, 1, n, p, q, u);
      }else{
         int a, b; cin >> a >> b;
         cout << query(1, 1, n, a, b) << "\n";
      }

      }

      

   }


}
