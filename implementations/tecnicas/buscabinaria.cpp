#include <bits/stdc++.h>

using namespace std;

int main(){
    // busca um numero x num vetor com busca binaria
    int n, x; // n = quantidade de elementos do vetor
    // x = numero que queremos encontrar 
    cin >> n >> x; 
    vector<int> v(n); // vetor com tamanho n
    
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int high = n;
    int low = 0;
    bool is = 0;

    while (low <= high)
    {
        int mid = (high + low) /2;
        if (v[mid] == x){
            is = 1;
            break;
        }

        if (v[mid] < x){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    

    cout << (is ? "sim" : "nao") << "\n";



    return 0;
}