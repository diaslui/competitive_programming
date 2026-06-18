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

   int recipe[3] = {0, 0, 0};
   int cost[3] = {0, 0, 0};
   int storage[3] = {0, 0, 0};

   cin >> storage[0] >> storage[1] >> storage[2];
   cin >> cost[0] >> cost[1] >> cost[2];

   ll r; cin >> r;

   for (char c: s){
   if (c == 'B'){
      recipe[0]++;
   }else if (c == 'S'){
      recipe[1]++;
   }else{
      recipe[2]++;
   }
   }

   ll ans = 0;
   
   auto test = [&](ll x) -> bool{
      // given x hamburgers 
      // what cost?
      
       ll y = 0; 
       for (int i=0; i < 3; i++){
          ll need = max(0LL, 1LL * recipe[i] * x - storage[i]);
          y += need * cost[i];
         if (y > r) return 0;
       } 
      return y <= r;
   };

   ll high = 1e13; 
   ll low = 0;
   while ( low <= high){
   
    ll mid = low + (high - low) /2;
    bool is = test(mid);
    if (is){
      ans = max(mid, ans);
      low = mid+1;
    }else{
      high = mid-1;
    }

   }
   cout << ans << endl;

   return 0;
}

