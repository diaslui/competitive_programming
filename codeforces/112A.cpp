// https://codeforces.com/problemset/problem/112/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;

    for (int i = 0; i < a.size(); i++)
    {
        a[i] = tolower(a[i]);
    }

    for (int i = 0; i < b.size(); i++)
    {
        b[i] = tolower(b[i]);
    }

    if (a < b)
    {
        cout << -1 << "\n";
    }
    else if (b < a)
    {
        cout << 1 << "\n";
    }
    else if (b == a)
    {
        cout << 0 << "\n";
    }

    return 0;
}
