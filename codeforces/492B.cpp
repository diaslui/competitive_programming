#include <bits/stdc++.h>

using namespace std;

int main(){

	  cout << fixed << setprecision(10);

  int n, l; cin >> n >> l;
  vector<double> v(n);
  for(int i=0; i < n; i++){
    cin >> v[i];
}  

  sort(v.begin(), v.end());
  
  double d = v[0] - 0;
  for (int i=1; i < n; i++){

  if ((v[i-1] + (d*2)) < v[i]){
   d = (v[i] - v[i-1]) / 2;
   }
  }


  if ((v[n-1] + d) < l){
   d = l - v[n-1];
   }


  cout << d << "\n";


   return 0;

}
