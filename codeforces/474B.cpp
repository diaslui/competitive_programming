#include <bits/stdc++.h>

using namespace std;

int main(){

  int n; cin >> n;
  vector<int> prefix(n);  
for(int i=0; i < n; i++){
 if (i == 0){
  cin >> prefix[0];
  continue;
} 
 int v; cin >> v;
 prefix[i] = prefix[i-1] + v;
}


int m; cin >> m;

while (m--){
 
  int q; cin >> q;
  int low = 0;
  int high = n; 

  while (low <= high){
   int mid = (low + high) /2;
   int val = prefix[mid];

   if (val >= q){
     high = mid -1;    
}else{
	low = mid + 1;      
}
}
  
  cout << low+1 << "\n";
}




  return 0;

}
