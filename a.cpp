#include <bits/stdc++.h>

using namespace std;


typedef long long ll;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

#define endl "\n"
#define dbg(x) cout << #x << " = " << x << "\n";

set<string> s;

void bt(string curr){
   if (s.count(curr)) return;
   s.insert(curr);
   cout << curr << endl;
   for (int i=0; i < 3; i++){
        curr[i] = curr[i] == '0' ? '1' : '0';      
        bt(curr);     
        curr[i] = curr[i] == '0' ? '1' : '0';      
   }
}


int main(){_

  string x; cin >> x;
  bt(x);
  cout << x << endl;
  return 0;
}

