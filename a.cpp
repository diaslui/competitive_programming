#include <bits/stdc++.h>

using namespace std;


typedef long long ll;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

#define endl "\n"
#define dgb(x) cout << #x << " = " << x << "\n";

vector<int> used(10, 0);

void backtracking(vector<string>& r,string s, string o){

   if (o.size() == 3){
      r.push_back(o);
      return;
   }

   for (int i=0; i < s.size(); i++){
      if (used[i]) continue;

      o.push_back(s[i]);
      used[i] = 1;
      backtracking(r, s, o);
      used[i] = 0;
      o.pop_back();
   }
}



vector<string> permute(string s){
   
   vector<string> r;
   backtracking(r,s, "");
   return r;
}

int main(){_
   
   string a = "ABC";
   for (string s: permute(a)){
      cout << s << endl;
   }


   return 0;
}

