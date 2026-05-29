#include <bits/stdc++.h>

using namespace std;

int main(){
  int n; cin >> n;
   pair<int, int> ad = {0, 0};
   for (int i=0; i < n; i++){
    char c; cin >> c;
    if (c == 'A'){
      ad.first++;
    }
    if (c == 'D'){
     ad.second++;
    }
  }
  
 if (ad.first > ad.second){
     cout << "Anton\n";
  }else if (ad.second > ad.first){
     cout << "Danik\n";
  }else{
     cout << "Friendship\n";
   }
  
  return 0;
}
