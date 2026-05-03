//https://codeforces.com/problemset/problem/339/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    vector<int> v;
    for (char c : s)
    {
        if (c != '+')
        {
            v.push_back(c - '0');
        }
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        if (i != 0)
        {
            cout << "+";
        }
        cout << v[i];
    }
    cout << "\n";

    return 0;
}
