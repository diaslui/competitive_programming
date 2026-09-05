#include <bits/stdc++.h>

using namespace std;


int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   
   int a, b; cin >> a >> b;
   set<char> s;
   for (int i=0; i < a; i++){
      char c; cin >> c;
      s.insert(c);
   }

   int ans = 1;
   
   for (int i=0; i < b; i++){
      char c; cin >> c;
      if (!ans) continue;
      if (!s.count(c)) ans = 0;
   }

   cout << (ans ? "S" : "N") << endl;
   return 0;
}
