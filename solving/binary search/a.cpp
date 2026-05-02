#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        s[i] = (i == 0 ? v[i] : v[i] + s[i - 1]);
    }

  //  sort(s.begin(), s.end());
    int m;
    cin >> m;
    while (m--)
    {
        int q;
        cin >> q;
        //    cout << "q =" << q << "\n";
        int high = n - 1;
        int low = 0;
        int target = q;
        int ans = high;
        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (s[mid] >= target)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        cout << ans + 1 << "\n";
    }

    return 0;
}