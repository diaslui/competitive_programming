#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, x;
    cin >> n >> x;
    map<int, int> v;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        int distance = x - a;

        if (v.count(distance))
        {
            cout << v[distance] + 1 << " " << i + 1 << "\n";
            return 0;
        }
        v[a] = i;
    }

    cout << -1 << "\n";

    return 0;
}