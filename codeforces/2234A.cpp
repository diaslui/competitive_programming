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
    vector<int> v(n);
    for (int i=0; i < n; i++){
	cin >> v[i];
      }

   sort(v.begin(), v.end(), greater<int>());
   bool ans = 1;
   for (int i=0; i < n-1; i++){
     int r = v[i] % v[i+1];
     if (i + 2 < n){
	if (r != v[i+2]){
	 ans = 0; break;
        }
       }
   }
    if (ans){
	cout << v[0] << " " << v[1] << "\n";
	}else{
	cout << -1 << "\n";
    }
   }


   return 0;
}

