#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n, m, p; cin >> n >> m >> p;
   
   vi rs(n, 0); vi cs(m, 0);
   
   while (p--){
      char op; int a, b; cin >> op >> a >> b;
      if (op == 'L'){
         int ra = rs[a-1];
         if (!ra) ra = a;
         int rb = rs[b-1];
         if (!rb) rb = b;

         rs[b-1] = ra;
         rs[a-1] = rb;
      }else{

         int ca = cs[a-1];
         if (!ca) ca = a;
         int cb = cs[b-1];
         if (!cb) cb = b;

         cs[b-1] = ca;
         cs[a-1] = cb;
      }
   }
   
   for (int r=0; r < n; r++){
     int rr = rs[r];
     if (!rr) rr = r+1;

   for (int c=0; c < m; c++){
      int cc = cs[c];     
      if (!cc) cc = c+1;

     cout <<  ((rr-1) * m) + cc; 
     if (c < m-1) cout << " ";
   }
   cout << "\n";
   }
   return 0;
}
