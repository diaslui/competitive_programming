/*
 * Dieta
 * Fase 1 — OBI2025 (Nivel 2)
 * https://github.com/diaslui/competitive_programming
*/
#include <iostream>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    int total = 0;

    for (int i = 0; i < n; i++){
        int p,g,c;

        cin >> p >> g >> c;
        total += (p+c)*4 + g*9;

    }

    cout << m - total;
    return 0;
}