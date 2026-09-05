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
using vi = vector<int>;
using vvi = vector<vi>;

#define endl "\n"
#define dbg(x) cout << #x << " = " << x << "\n";
#define all(x) x.begin(), x.end()

void solve(){
    int n, m;
    cin >> n >> m;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<long long> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
    long long hp1 = a[0] + n - 1;
    long long hp2 = b[0] + m - 1;
    
    if (hp1 >= hp2) {
        cout << 1 << "\n";
    } else {
        cout << 2 << "\n";
    }

}

int main(){_
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}

