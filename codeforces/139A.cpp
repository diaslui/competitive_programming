#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 1e9 + 7;

#define endl "\n"
#define dbg(x) cout << #x << " = " << x << "\n";

int main(){_

   int n; cin >> n;
   vector<int> v(7);
   for (int i=0; i < 7; i++) cin >> v[i];
   int aux = 0;
   int i = -1;
   while (aux < n){ 
   i++;
   aux += v[i % 7];
   }
   cout << (i%7) +1 << endl;
   return 0;
}

