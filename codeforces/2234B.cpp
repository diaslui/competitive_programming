#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
#define ll long long

bool p(ll x){
  string a = to_string(x);
  string b = a;
 
  reverse(a.begin(), a.end());
  return a == b;
 }


int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   int t; cin >> t;
   while (t--){ 
   ll n; cin >> n;
	
   ll a,b;
   b = n - (n % 12);
   bool ans = 0;   

   while (!ans && b > -1){
 
     a = n - b;
     if (p(a)){
     ans = 1;
     break;
    }   
     if (a==0) break; 
     
     b -= 12;
     }

    if (ans){
     cout << a << " " << b;
    }else{
     cout << -1;
    }
  
    cout << endl;
   }


   return 0;
}

