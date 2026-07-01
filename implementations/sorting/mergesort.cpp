#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 1e9 + 7;

#define endl "\n"
#define dbg(x) cout << #x << " = " << x << "\n";

vector<int> merge(vector<int> &a, vector<int> &b){
   vector<int> m(a.size() + b.size());
   int i, j, k; i = 0; j = 0; k = 0;

   while (i < a.size() && j < b.size()){
      if (a[i] < b[j]){
         m[k] = a[i];
         i++;
      }else{
         m[k] = b[j];
         j++;
      }
      k++;
   }

   for (int h=i; h < a.size(); h++){
      m[k] = a[h];
      k++;
   }

   for (int h=j; h < b.size(); h++){
      m[k] = b[h];
      k++;
   }

   return m;
}


vector<int> mergeSort(vector<int> &v){
   if (v.size() == 1){
      return v;
   }

   vector<int> l(v.begin(), v.begin() + v.size()/2); 
   vector<int> r(v.begin()+v.size()/2, v.end());

   l = mergeSort(l);
   r = mergeSort(r);

   return merge(l, r);
}

int main(){_

   vector<int> v{1,4,4,56,7,7,7,67,67,67,664,5454,999,0,3,7,4,888, -1};
   
   v = mergeSort(v);

   for (int i=0; i < v.size(); i++){ 
   cout << v[i] << (i < v.size()-1 ? " " : endl);
   }
   return 0;
}

