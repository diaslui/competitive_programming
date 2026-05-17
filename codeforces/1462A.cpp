#include <bits/stdc++.h>

using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
  int n; cin >> n;
  vector<int> a(n); 
  vector<int> b;


  for (int i = 0; i < n; i++){
     cin >> a[i]; }

   
  bool take = 0;
  int l = n-1;
  int r = 0;

  while (l >= r){
  
  if (take){
  b.push_back(a[l]);
  l--;
  take = 0;
  }else{
  b.push_back(a[r]);
  r++;
  take = 1;
  }
  }



	  for (int i=0; i < n; i++){
    cout << b[i];

     if (i == n-1){
      cout << "\n";
     }else{
     cout << " "; }
     }

  }


 return 0;

}
