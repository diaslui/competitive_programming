#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
#define ll long long

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n; cin >> n;
   int m = 0;
   vector<int> v(n);
   for (int i=0; i < n; i++){
    cin >> v[i];
    m = max(v[i], m);  
   }

   for (int r=m; r > 0; r--){

   for (int i=0; i < n; i++){

      if (v[i] >= r){
       cout << 1;
      }else{
      cout << 0;
 	 }
     cout << " ";

    }
   cout << "\n";
  }



   return 0;
}

