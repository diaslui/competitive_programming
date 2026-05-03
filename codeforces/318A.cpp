// https://codeforces.com/problemset/problem/318/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 1 2 3 4 5 6 7 8 9 10
    // 1 3 5 7 9 - 2 4 6 8 10

    long long k, n;
    cin >> n >> k;

    long long oddcount = (n + 1) / 2;
    if (k <= oddcount)
    {
        cout << (k * 2) - 1;
    }
    else
    {

        cout << (k - oddcount) * 2;
    }

    cout << "\n";

    return 0;
}
