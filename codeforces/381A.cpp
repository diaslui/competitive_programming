#include <bits/stdc++.h>

using namespace std;

int main(){

  int n; cin >> n;
  
  vector<int> v(n);
  for (int i=0; i < n; i++){
    cin >> v[i]; 
    }

  int l = 0;
  int r = n-1;
  pair<int, int> ans = {0, 0};

  bool flag = true;
  while (l <= r){


  int a;


  if (v[r] >= v[l]){
   a = v[r];
   r--;
}else{
   
   a = v[l];
   l++;
}


  if (flag){
   flag = false;
   ans = {ans.first + a, ans.second};
}else{
   flag = true;
   ans = {ans.first, ans.second + a};

}



}
  

	    cout << ans.first << " " << ans.second << "\n";


  return 0;


}
