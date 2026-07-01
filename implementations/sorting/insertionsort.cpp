#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 1e9 + 7;

#define endl "\n"
#define dbg(x) cout << #x << " = " << x << "\n";

void insertionSort(vector<int> &v){
   int n = v.size();
   for (int i=1; i < n; i++){
      int j = i;
      while (j > 0 && v[j-1] > v[j]){
      swap(v[j-1], v[j]);
      j--;
      }
   }
}

int main(){_

   vector<int> v{5,576,3,535,2, 455656,5,667,0, 9};
   insertionSort(v);

   for (int i=0; i < v.size(); i++){ 
   cout << v[i] << (i < v.size()-1 ? " " : endl);
   }
   return 0;
}

