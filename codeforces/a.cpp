#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s; cin >> s;
   int f = s[0];
   if (f > 96){
      s[0] -= 32;
    } 
   
    cout << s << "\n";
    return 0;
}
