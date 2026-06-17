#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
#define ll long long

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   ll n; cin >> n;
   ll v = 0;
   for (ll i=0; i < n; i++){
    ll x;
    cin >> x;
    v = gcd(v, x);
   }
   ll ans = 0;
   for (ll i=1; i * i <= v; i++){
   
     if (v % i == 0){
	ans++;

	if (i * i < v){
	   ans++;
	}

	}
  }
    cout << ans << "\n";

   return 0;
}

