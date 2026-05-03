#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> v(n);
    for (int i=0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i=0; i < n; i++){
        cout << v[i];
        if (i == n-1){
            cout << "\n";
        } else {
            cout << " ";
        }
    }

    return 0;
}
