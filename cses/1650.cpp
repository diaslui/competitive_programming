#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAXN = 100000 * 2 + 5;
ll v[MAXN];
ll seg[4*MAXN];

ll build(int p, int l, int r){
   
      if (l == r){
         seg[p] = v[l];
         return v[l];
      };
      
      int m = (l+r)/2;

      return seg[p] = build(2*p, l, m) ^ build(2*p+1, m+1, r);
}

ll query(int p, int l, int r, int a, int b){

   if (l > b || r < a) return 0;
   if (l >= a && r <= b) return seg[p];

   int m = (l+r)/2;
   return query(p*2, l, m, a, b) ^ query(2*p+1, m+1, r, a, b);
}

int main(){

   int n, q; cin >> n >> q;
   for (int i=1; i <=n; i++) cin >> v[i];
   build(1, 1, n);

   while (q--){

   int a,b; cin >> a >> b;
   cout << query(1, 1, n, a, b) << endl;

   }


   return 0;

}
