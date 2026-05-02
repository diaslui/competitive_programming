#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, k;
    cin >> n >> k;

    vector<long long> s(n);

    for (long long i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    sort(s.begin(), s.end());

    auto test = [&](long long x) -> bool
    {
        long long c = 0;
        for (long long i = n / 2; i < n; i++)
        {
            c += max(0LL, x - s[i]);
        }
        return c <= k;
    };
    
    long long high = 2e9;
    long long low = 0;

    while (low <= high)
    {
        long long mid = (low + high) / 2;
        bool v = test(mid);

        if (v)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << low - 1 << "\n";

    return 0;
}