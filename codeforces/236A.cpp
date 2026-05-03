// https://codeforces.com/problemset/problem/236/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    set<char> chars;
    for (char c : s)
    {

        if (!chars.count(c))
        {
            chars.insert(c);
        }
    }

    if (chars.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }

    cout << "\n";

    return 0;
}
