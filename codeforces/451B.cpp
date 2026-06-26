#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n; cin >> n;
   vector<int> v(n), s(n);
   for (int i=0; i < n; i++){
      cin >> v[i];
      s[i] = v[i];
   }
   sort(s.begin(), s.end());

   int l = -1, r = -1;
   
   for (int i = 0; i < n; i++) {
      if (v[i] != s[i]) {
         l = i;
         break;
      }
   }

   for (int i = n - 1; i >= 0; i--) {
      if (v[i] != s[i]) {
         r = i;
         break;
      }
   }

   if (l == -1) {
      cout << "yes\n1 1" << endl;
      return 0;
   }

   reverse(v.begin() + l, v.begin() + r + 1);

   int ans = 1;
   for (int i = 0; i < n; i++) {
      if (v[i] != s[i]) {
         ans = 0;
         break;
      }
   }

   if (!ans) {
      cout << "no" << endl;
   } else {
      cout << "yes\n";
      cout << l + 1 << " " << r + 1 << endl;   }

   return 0;
}
