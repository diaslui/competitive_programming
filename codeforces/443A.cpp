#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;

    getline(cin, s);

    set<char> v;

    for (char c : s)
    {
        if (c - 'a' < 26 && c - 'a' >= 0)
        {
            // cout << "!!!! " << c - 'a' << "     \n";
            v.insert(c);
        }
    }

    cout << v.size() << "\n";

    return 0;
}