#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    map<string, int> m;

    while (n--)
    {
        string a;
        cin >> a;

        if (!m.count(a))
        {
            m[a] = 0;
            cout << "OK\n";
            continue;
        }

        m[a]++;
        cout << a << m[a] << "\n";
    }

    return 0;
}