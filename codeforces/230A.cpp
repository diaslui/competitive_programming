#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s, n;
    cin >> s >> n;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    while (n--)
    {
        int x, y;
        cin >> x >> y;
        pq.push({x, y});
    }

    bool ans = 1;
    while (!pq.empty() && ans)
    {
        auto [x, y] = pq.top();
        if (x < s)
        {
            ans = 1;
            s += y;
            pq.pop();
        }
        else
        {
            ans = 0;
        }
    }

    cout << (ans ? "YES" : "NO");
    cout << "\n";

    return 0;
}
