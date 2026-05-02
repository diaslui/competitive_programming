#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, t;
    cin >> n >> t;

    vector<int> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    int l = 0;
    int sum = 0;
    int ans = 0;

    int thi = 0;
    for (int r = 0; r < n; r++)
    {
        thi++;
        sum += s[r];
        while (sum > t)
        {
            thi--;

            sum -= s[l];
            l++;
        }
        ans = max(thi, ans);
    }

    cout << ans << "\n";
    return 0;
}