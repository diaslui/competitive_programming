#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int c = 0;
    int d = n;
    while (d > 0)
    {
        if (n % d == 0)
        {
            c++;
        }
        d--;
    }

    cout << c << "\n";
    return 0;
}