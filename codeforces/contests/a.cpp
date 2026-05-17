#include <bits/stdc++.h>

using namespace std;

int main(){

 int t; cin >> t;

 while(t--){

 int n; cin >> n;
 vector<int> v(n);

 for (int i =0; i < n; i++){
   cin >> v[i];
  }
 
 int c = 0;
 for (int i=0; i < n; i++){
   if (v[i] % 3 == 0){
   c++;
   v.erase(v.begin() + i);
   continue;
}


   for (int j=i+1; j < n; j++){
   cout << v[i] + v[j] << " % 3 == " << (v[i] + v[j]) % 3 <<  " \n";     
   if ((v[i] + v[j]) % 3 == 0){
     i = 0;
     c++;
     v.erase(v.begin() + i);
     v.erase(v.begin() + j);
     break;
   }
  }

 


}


 
  cout << c << "\n";


}






 return 0;
}
