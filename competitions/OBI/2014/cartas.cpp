#include <bits/stdc++.h>

using namespace std;

int main()
{
    // https://olimpiada.ic.unicamp.br/pratique/ps/2014/f1/cartas/
    int n = 5;
    int lastv = -1;
    char ans = ' ';
    while (n--)
    {
        int v;
        cin >> v;

        if (lastv == -1)
        {
            lastv = v;
            continue;
        }

        if (v < lastv)
        {
            if (ans == ' ' || ans == 'D')
            {
                ans = 'D';
            }
            else
            {
                ans = 'N';
                break;
            }
        }
        else
        {
            if (ans == ' ' || ans == 'C')
            {
                ans = 'C';
            }
            else
            {
                ans = 'N';
                break;
            }
        }

        lastv = v;
    }

    cout << ans << "\n";
    return 0;
}