#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n));

    int xd[4] = {-1, 1, 0, 0};
    int yd[4] = {0, 0, 1, -1};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char v;
            cin >> v;
            if (v == '*')
            {
                grid[i][j] = -1;
            }
            else
            {
                grid[i][j] = 0;
            }
        }
    }

    vector<vector<int>> dist(n, vector<int>(n, -1));
    queue<pair<int, int>> q;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (grid[i][j] == 0)
            {
                dist[i][j] = 0;
                q.push({i, j});
            }
        }
    }

    while (!q.empty())
    {

        auto [y, x] = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {

            int xf = xd[i] + x;
            int yf = yd[i] + y;

            if (yf > -1 && xf > -1 && yf < n && xf < n && dist[yf][xf] == -1)
            {
                dist[yf][xf] = dist[y][x] + 1;
                q.push({yf, xf});
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << (dist[i][j] <= 9 ? dist[i][j] : 9);
        }

        cout << "\n";
    }

    return 0;
}