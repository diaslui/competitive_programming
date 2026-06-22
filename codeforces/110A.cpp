#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
typedef long long ll;
#define debug(x) cout << #x << " = " << x << "\n";

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   
   string s; cin >> s;
   int count = 0;
   for (char c: s){
      if (c == '7' || c == '4'){
         count++;
      }
   }

   cout << (count == 7 || count == 4 ? "YES" : "NO") << endl;



   return 0;
}

