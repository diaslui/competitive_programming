/*
 * Barras
 * Fase 1 — OBI2025 (Nivel 2)
 * https://github.com/diaslui/competitive_programming
*/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> x(n);
    for (int i=0; i < n; i++){
        cin >> x[i];
    }

    int h = *max_element(x.begin(), x.end());

    for (int l = 0; l < h; l++){

        for(int c = 0; c < n; c++){
            if (l < (h - x[c])){
                cout << 0;
            }else{
                cout << 1;
            }

        }
        cout << endl;
    }
    return 0;
};