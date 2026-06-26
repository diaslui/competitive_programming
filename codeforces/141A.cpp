#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
typedef long long ll;
#define debug(x) cout << #x << " = " << x << "\n";

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   string a, b, c; cin >> a >> b >> c;
   
   if (a.size() + b.size() != c.size()){
      cout << "NO" << endl;
      return 0;
   }
   int ans = 1;
   map<char, int> mc;
   for (char ch: c){
      mc[ch]++;
   }

   for (char ch: a){
      mc[ch]--;
      if (mc[ch] < 0){
       ans = 0;
      break;
      }
   }

   if (!ans){
      cout << "NO" << endl; return 0;
   }

   for (char ch: b){
      mc[ch]--;
      if (mc[ch] < 0){
       ans = 0;
      break;
      }
   }


   if (ans){
      cout << "YES" << endl;
   }else{
      cout << "NO" << endl;
   }




   return 0;
}

