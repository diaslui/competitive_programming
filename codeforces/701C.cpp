#include <bits/stdc++.h>

using namespace std;

int main(){

 int n; cin >> n;
 vector<char> v(n);
 set<char> s;
 
 for(int i=0; i < n;i++){
 cin >> v[i];
 s.insert(v[i]);
}

int l = 0;
map<char,int> m;

int d = 0;
int ans = 10e5;

for (int r=0; r < n; r++){
  
  m[v[r]]++;
   if (m[v[r]] == 1){
     d++;
   }
  
    
  while (d == s.size()){
  

   ans = min(ans, r-l+1);
   m[v[l]]--;
 
   if(m[v[l]] == 0){
    d--;
  }

  
   l++;

 }



}


 cout << ans << "\n";
 return 0;
}
