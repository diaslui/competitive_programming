#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
typedef long long ll;
#define debug(x) cout << #x << " = " << x << "\n";

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   int t; cin >> t;
   while(t--){
   
   int n; cin >> n;
   vector<int> v;

   for (int i=0; i < n; i++){
      int x;
      cin >> x;
      if (x % 6){
         v.push_back(x);
      }else{
      cout << x;
     
if (i == n-1 && v.size() == 0){
         cout << endl;
      }else{
         cout << " ";
      }

     }
      
   }


   for (int i = 0; i < v.size(); i++){
      cout << v[i];
      if (i == v.size()-1){
         cout << endl;
      }else{
         cout << " ";
      }
   }



   }



   return 0;
}

