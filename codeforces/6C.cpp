#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 1e9 + 7;

#define endl "\n"
#define dbg(x) cout << #x << " = " << x << "\n";

int main(){_

   int n; cin >> n;
   vector<int> v(n);
   for (int i=0; i < n; i++){
      cin >> v[i];
   }
   
   int l, r;
   int lsum, rsum;
   l = 0; r = n-1;
   lsum = v[l]; rsum = v[r];

   while (l < r-1){
     if (lsum <= rsum){
         l++;
         lsum += v[l];
     }else{
         r--;
         rsum += v[r];
     }
   }

   l++;
   cout << l << " " << n - l << endl;

   return 0;
}

