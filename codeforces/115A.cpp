// https://codeforces.com/problemset/problem/115/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> parent(n + 1, -1);
    vector<int> memo(n + 1, -1);

    for (int i = 1; i <= n; i++)
    {
        cin >> parent[i];
    }

    int ans = 0;

    auto countparent = [&](auto self, int p) -> int
    {
        if (parent[p] == -1)
        {
            return 0;
        }
        if (memo[p] == -1)
        {
            memo[p] = self(self, parent[p]) + 1;
        }

        return memo[p];
    };

    for (int e = 0; e <= n; e++)
    {

        ans = max(ans, countparent(countparent, e));
    }

    cout << ans + 1 << "\n";

    return 0;
}
