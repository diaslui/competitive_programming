#include <bits/stdc++.h>

using namespace std;

const int INF = 2 * 10e9;

vector<int> v;
vector<int> seg;

int build = (int p, int l, int r){
      if (l == r) return seg[p] = v[l];
      int m = (l+r)/2;
      return seg[p] = min(
      build(2*p, l, m), 
      build(p*2+1, m+1, r
      );
};


int query(int a, int b, int p, int l, int r){
      if (l > b || r < a) return INF;
      if (l >= b && r <= b) return seg[p];

      int m = (l+r)/2;
      return min(query(a, b, 2*p, l, m), query(a, b, 2*p+1, m+1, r));
}



int main(){
   ios::sync_with_stdio(0); cin.tie(0);
   
   int n, q; cin >> n >> q;
   v.assign(n);
   seg.assign(n);
  
   build(1, 0, n-1);

   return 0;
}
