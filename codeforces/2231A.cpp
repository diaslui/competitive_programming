#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
#define ll long long

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   int t; cin >> t;
   while(t--){

   int n; cin >> n;
   for (int i=n*2; i > n; i--){
    cout << i;
    if (i == n+1){
 	cout << "\n";
     }else{
	cout << " ";
     }

   }


  } 


   return 0;
}

