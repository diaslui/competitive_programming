#include <bits/stdc++.h>

using namespace std;

int main()
{

  int n, m;
  cin >> n >> m;
  vector<pair<int, vector<int>>> adj(n + 1, {0, vector<int>()});
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
  vector<bool> visited(n + 1, 0);
  for (int i = 1; i <= n; i++)
  {
    cin >> adj[i].first;
    pq.push({adj[i].first, i});
  }
  while (m--)
  {
    int a, b;
    cin >> a >> b;
    adj[a].second.push_back(b);
    adj[b].second.push_back(a);
  }

  auto dfs = [&](int i) -> void
  {
    stack<int> s;
    s.push(i);
    visited[i] = 1;

    while (!s.empty())
    {
      int t = s.top();
      s.pop();
      for (int j : adj[t].second)
      {
        if (!visited[j])
        {
          s.push(j);
          visited[j] = 1;
        }
      }
    }
  };

  long long ans = 0;
  while (!pq.empty())
  {
    auto [a, b] = pq.top();
    if (!visited[b])
    {
      ans += a;
      dfs(b);
    }
    pq.pop();
  }

  cout << ans << "\n";
  return 0;
}
