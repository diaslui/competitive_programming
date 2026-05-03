#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    set<int> s;
    while (n--)
    {
        int v;
        cin >> v;
        if (!s.count(v))
        {
            s.insert(v);
        }
    }

    cout << s.size() << "\n";
    return 0;
}
