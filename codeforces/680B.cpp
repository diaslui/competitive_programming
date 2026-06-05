#include <bits/stdc++.h>

using namespace std;

int main(){
 
 int n, a; cin >> n >> a;
 vector<int> v(min(a - 1,n - a)+1, 0);
 int ans = 0;
 for (int i=1; i <= n; i++){
  bool t; cin >> t;
  if (t){
  if (i == a){
    ans++;
    continue;
  }   
  if (abs(a-i) > v.size() - 1){
   ans++;
   continue;
   }

  v[abs(a - i)]++;
  }


 
if (abs(a-i) < v.size() && v[abs(a - i)] == 2){
   ans+= 2;
}

 
  }
 cout << ans << "\n";


 return 0;
}
