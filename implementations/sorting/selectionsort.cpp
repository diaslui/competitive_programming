#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 1e9 + 7;

#define endl "\n"
#define dbg(x) cout << #x << " = " << x << "\n";

void selectionSort(vector<int> &v){

   for (int i=0; i < (int)v.size()-1; i++){
      int index = i;
      for (int j=i+1; j < v.size(); j++){
         if (v[j] < v[index]){
            index = j;
         }
      }
     if (index != i) swap(v[i], v[index]);
   }  

}


int main(){_

   vector<int> v{5,576,3,535,2, 455656,5,667,0, 9};
   selectionSort(v);

   for (int i=0; i < v.size(); i++){ 
   cout << v[i] << (i < v.size()-1 ? " " : endl);
   }
   return 0;
}

