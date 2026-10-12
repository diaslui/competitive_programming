#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAXN = 1000000 * 2 + 5;
const ll INF = 2e18;

int seg[4*MAXN];
int v[MAXN];

ll build(int p, int l, int r){
   if (l == r) return seg[p] = v[l];
   int m = (l+r)/2;
   return seg[p] = min(
      build(2*p, l, m),
      build(2*p+1,m+1, r)
   );
}

ll query(int p, int l, int r, int a, int b){
      if (l > b || r < a) return INF;
      if (l >= a && r <= b) return seg[p];
      int m = (l+r)/2;
      return min(
      query(2*p, l, m, a, b),
      query(2*p+1, m+1, r, a, b)
      );
}

void update(int p, int l, int r, int a, int b){
    if (l == r){
         v[a] = b;
       seg[p] = b;
       return;
    }

    int m = (l+r)/2;
    if (a <= m){
        update(2*p, l, m, a, b);
    }else{
        update(2*p+1, m+1, r, a, b);
    }

    seg[p] = min(seg[2*p], seg[2*p+1]);
}


int main(){
   
   int n, q; cin >> n >> q;
   for (int i=1; i <= n; i++) cin >> v[i];
   build(1, 1, n);

   while (q--){
      ll b;
      int typ, a; cin >> typ >> a >> b;
      if (typ == 1){
         update(1, 1, n, a, b);
      }else{
         cout << query(1, 1, n, a, b) << endl;
      }

   }

   return 0;
}
