// https://codeforces.com/problemset/problem/158/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> count(5, 0);
    int ans = 0;
    while (n--)
    {
        int v;
        cin >> v;
        count[v]++;
    }

    ans += count[4];
    ans += count[3];
    count[1] = max(0, count[1] - count[3]);

    ans += count[2] / 2;

    if (count[2] % 2 == 1)
    {
        ans++;
        count[1] = max(0, count[1] - 2);
    }

    if (count[1] > 0)
    {
        ans += (count[1] + 3) / 4;
    }

    cout << ans << "\n";

    return 0;
}
