#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 1e9 + 7;
#define fi first
#define se second
#define pb push_back
#define sz size
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vl = vector<ll>;
using vi = vector<int>;
using vvi = vector<vi>;
#define endl "\n"
#define dbg(x) cout << #x << " --> " << x << "\n";
#define all(x) x.begin(), x.end()

void solve(){
    int n; cin >> n;
    string s; cin >> s;
 
    int total = 0;
 
    for(int i=0; i < n; i++){
        if (s[i] == '1') total++;
    }
 
    int b = total;
 
    
    for (int i=1; i < n-1; i++){
        int x, y; 
        x = s[i-1];
        y = s[i+1];
 
        if (x == '1' && y == '1' && s[i] == '0'){
           s[i] = '1'; 
         b++;
        }
    }
 
    int a = b;

    
    for (int i=1; i < n-1; i++){
        int x, y; 
        x = s[i-1];
        y = s[i+1];
 
        if (x == '1' && y == '1' && s[i] == '1'){
           s[i] = '0'; 
           a--;
        }
    }


    cout << a << " " << b << endl;

}

int main(){_
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}

