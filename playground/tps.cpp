#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
typedef long long ll;
#define debug(x) cout << #x << " = " << x << "\n";

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n, k; cin >> n >> k;
   vector<int> v(n);

   for (int i=0; i < n; i++){
      cin >> v[i];
   }

   int l = 0;
   int e = 0;
   int c = 0;
   pair<int, int> ans= {-1, -1};
   int total = 0;
   for (int r=0; r < n; r++){

      e++;
      total += v[r];
      while (total > k){
         e--;
         total -= v[l];
         l++;
      }
      if (total == k && e > c){
         ans.first = l;
         ans.second = r;
         c = e;
      }
   }

   if (ans.first == -1){
      cout << -1 << endl;
      return 0;
   }

   for (int i=ans.first; i <= ans.second; i++){
      cout << v[i];
      if (i == ans.second){
        cout << endl;
      }else{
         cout << " ";
      }
   }
   


   return 0;
}

