// https://codeforces.com/problemset/problem/230/B
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    auto prime = [&](long long k) -> bool
      {
        if (k <= 1) return 0;
        if (k == 2) return 1;
        if (k % 2 == 0) return 0;

        for (int i = 3; i <= sqrt(k); i += 2)
        {
            if (k % i == 0) return 0;
        }

        return 1;
    };

    while (n--)
    {
        long long k;
        cin >> k;
        long long sq = sqrt(k);
        if (sq * sq == k)
        {
            cout << (prime(sq) ? "YES" : "NO");
        }
        else
        {
            cout << "NO";
        }
        cout << "\n";
    }

    return 0;
}
