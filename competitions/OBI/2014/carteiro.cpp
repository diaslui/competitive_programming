#include <bits/stdc++.h>

using namespace std;

int main()
{
// https://olimpiada.ic.unicamp.br/pratique/ps/2014/f1/carteiro/
    int n, m;
    cin >> n >> m;

    unordered_map<int, int> c;
    int ans = 0;

    int first;
    for (int i = 0; i < n; i++)
    {

        int v;
        cin >> v;
        if (i == 0)
        {
            first = v;
        }
        c[v] = i;
        //    cout << c[v] << "\n";
    }

    int last = -1;
    while (m--)
    {

        int v;
        cin >> v;
        if (last != -1)
        {
            ans += abs(c[v] - c[last]);
        }
        else
        {
            ans += abs(c[first] - c[v]);
        }
        //    cout << ans << "\n";
        last = v;
    }

    cout << ans << "\n";

    return 0;
}