#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, target;
    cin >> s;

    target = "hello";
    int k = 0;

    for (int i=0; i < s.size(); i++){
        if (s[i] == target[k]){
            k++;
        }
    }

    if (k == target.size()){
        cout << "YES";
    }else{
        cout << "NO";
    }
    cout << "\n";
    
    return 0;
}
