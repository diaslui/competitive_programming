#include <bits/stdc++.h>

using namespace std;

int main(){

    string p_A, c_B, p_B, c_A;
    int pa, cb, pb, ca;

    cin >> p_A >> c_B;
    cin >> p_B >> c_A;
  
    pa = stoi(p_A.substr(0, 2));
    cb = stoi(c_B.substr(0, 2));
    pb = stoi(p_B.substr(0, 2));
    ca = stoi(c_A.substr(0, 2));

    int s1 = cb - pa;// 12
    int s2 = ca - pb; // 8

    int f2 = (s1 - s2) / 2;
    int d = cb - (pa + f2);
    cout << d*60 << " " << f2 << "\n";

    return 0;
}