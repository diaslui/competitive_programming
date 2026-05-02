/*
 * Festa O(1)
 * Fase 1 — OBI2025 (Nivel 2)
 * https://github.com/diaslui/competitive_programming
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int e, s, l;
    cin >> e;
    cin >> s;
    cin >> l;

    int maxVal = max({e,s,l});
    int minVal = min({e,s,l});

    cout << 2* (maxVal-minVal) << endl;

    return 0;
};
