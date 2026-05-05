#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, switched;
    cin >> s;

    bool zeroisupper = s[0] - 'a' < 0;

    int k = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] - 'a' < 0)
        {
            switched.push_back(tolower(s[i]));
            k++;
        }
        else
        {
            switched.push_back(toupper(s[i]));
        }
    }
    if (!zeroisupper && k == s.size() - 1 || k == s.size())
    {
        s = switched;
    }

    cout << s << "\n";
    return 0;
}
