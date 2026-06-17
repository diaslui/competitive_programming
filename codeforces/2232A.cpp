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
   int n;
    cin >> n;
    vector<int> v(n);
    for (int i=0; i < n; i++){
	cin >> v[i];
     }
     sort(v.begin(), v.end());
     int mid = v[n/2];
     int a, b; a = 0; b = 0;
     bool after = 0;
     for (int i=0; i < n; i++){

	if (v[i] == mid){
	after = 1;
	continue;
         }
       if (after){
	b++;
          }else{
	a++;
         }
      }
	
	cout << max(a, b) << "\n";

   }


   return 0;
}

