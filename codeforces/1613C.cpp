#include <bits/stdc++.h>

using namespace std;

#define ll long long


int main(){
   
  int t;cin >> t;

  while (t--){


   int n; cin >> n;
   long long h; cin >> h;

   vector<ll> a(n);
   for (int i=0; i < n; i++){
	cin >> a[i];
    } 
   
   auto test = [&](ll k){
       
       ll c = k;
       for (int i=0; i < n-1; i++){
          if (a[i] + k > a[i+1]){ 
            c += a[i+1] - a[i];
         }else{
	    c += k;
          }
        }

	return c >= h;
     };

  
   ll low = 0;
   ll high = 1e18;
 
   while(low <= high){

   ll mid = (low + high) /2;
   bool q = test(mid);

   if (q){
   high = mid -1;
   }else{
   low = mid +1;
    }
   } 

  cout <<  low  << "\n";

}
  return 0;
}
