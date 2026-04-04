// https://neps.academy/br/exercise/57
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int yc, xc;
    cin >> yc >> xc;

    vector<vector<int>> grid(yc, vector<int>(xc));
    vector<vector<bool>> visited(yc, vector<bool>(xc, 0));
    pair<int, int> first;

    for (int y = 0; y < yc; y++)
    {
        for (int x = 0; x < xc; x++)
        {
            cin >> grid[y][x];
            if (grid[y][x] == 3)
            {
                first = {y, x};
            }
        }
    }

    int c = 1;

    auto dfs = [&](auto self, int y, int x) -> void
    {
        if (!visited[y][x])
        {
            if (grid[y][x] == 1)
            {
                c++;
            }

            if (grid[y][x] == 2)
            {
                c++;
                return;
            }

            visited[y][x] = 1;
        }

        if (x + 1 < xc && !visited[y][x + 1] && grid[y][x + 1] != 0)
        {
            self(self, y, x + 1);
        }

        if (y + 1 < yc && !visited[y + 1][x] && grid[y + 1][x] != 0)
        {
            self(self, y + 1, x);
        }

        if (x - 1 >= 0 && !visited[y][x - 1] && grid[y][x - 1] != 0)
        {
            self(self, y, x - 1);
        }

        if (y - 1 >= 0 && !visited[y - 1][x] && grid[y - 1][x] != 0)
        {
            self(self, y - 1, x);
        }
    };

    dfs(dfs, first.first, first.second);
    cout << c << "\n";

    return 0;
}