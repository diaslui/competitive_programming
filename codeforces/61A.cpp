#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
typedef long long ll;
#define debug(x) cout << #x << " = " << x << "\n";

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   string a, b; cin >> a >> b;
   string ans = "";
   for (int i=0;i < a.size(); i++){
    int c =((int)a[i]  ^ (int)b[i]); 
    ans.push_back(c + '0');
   }

   cout << ans << endl;


   return 0;
}

