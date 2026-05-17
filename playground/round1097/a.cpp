#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> v(n);

        for (long long i = 0; i < n; i++)
        {

            cin >> v[i];
        }

        long long ans = 0;

        long long s = 0;
        int k = 0;
        for (long long i = n - 1; i >= 0; i--)
        {

            s += v[i];
            if (s > 0)
            {
                k++;
                continue;
            }

            s = 0;
        }

        cout << k << "\n";
    }

    return 0;
}