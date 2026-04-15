#include <bits/stdc++.h>
// https://codeforces.com/problemset/problem/2218/B
using namespace std;

#define INF 1e18

int main()
{

    long long n, m;
    cin >> n >> m;

    if (m == 0)
    {
        cout << -1 << "\n";
        return 0;
    }

    vector<vector<pair<long long, long long>>> adj(n + 1);
    vector<long long> dist(n + 1, INF);

    while (m--)
    {
        long long a, b, w;
        cin >> a >> b >> w;
        adj[a].push_back({b, w});
        adj[b].push_back({a, w});
    }

    priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> pq;

    long long target = n;
    // d, v
    vector<long long> parent(n + 1, INF);
    pq.push({0, 1});
    dist[1] = 0;
    parent[1] = -1;

    while (!pq.empty())
    {

        auto [d, v] = pq.top();
        pq.pop();

        if (v == target)
        {
            break;
        }

        if (d > dist[v])
        {
            continue;
        }

        for (auto [u, w] : adj[v])
        {

            if (w + d < dist[u])
            {
                dist[u] = d + w;
                pq.push({dist[u], u});
                parent[u] = v;
            }
        }
    }

    if (dist[n] == INF)
    {
        cout << -1 << "\n";
        return 0;
    }

    vector<long long> path;

    for (long long i = n; i > -1; i = parent[i])
    {
        path.push_back(i);
    }

    for (long long i = path.size() - 1; i >= 0; i--)
    {
        cout << path[i];

        if (i == 0)
        {
            cout << "\n";
        }
        else
        {
            cout << " ";
        }
    }

    return 0;
}