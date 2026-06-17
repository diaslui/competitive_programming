#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
#define ll long long

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   int t; cin >> t;
   while (t--){
     ll n,  a, b; cin >> n >> a >> b;
     ll ans, r; 
       ans = 0;
       r = n % 3;
       n -= r; 
	
       if (n){
	ans += n/3 * min(3*a, b);
        } 
       if (r){
	ans += min(r*a, b);
       }
 

     cout << ans << endl;
    }


   return 0;
}

