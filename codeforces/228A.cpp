#include <bits/stdc++.h>

using namespace std;


int main(){
 
  set<int> s;
  for (int i=0; i < 4; i++){
   int v; cin >> v;
   s.insert(v);
  }

  int ss = s.size();
  cout << 4 - ss <<  "\n";



 return 0;
}
