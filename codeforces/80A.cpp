#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
typedef long long ll;
#define debug(x) cout << #x << " = " << x << "\n";

int prime(int x){
   
   for (int i=x-1; i > 1; i--){
   if (x % i == 0){
      return 0;
   }
   }
  return 1; 
   
}

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   
   int n,m; cin >> n >> m;
   if (!prime(m)){
      cout << "NO" << endl;return 0;
   }
   int ans = 1;
   for (int i = n+1; i < m; i++){
   
      if (prime(i)){
         ans = 0; break;
      }

   }

   if (ans){
      cout << "YES";
   }else{
      cout << "NO";
   }

   cout << endl;


   return 0;
}

