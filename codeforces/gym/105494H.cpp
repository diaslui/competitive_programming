#include <bits/stdc++.h>

using namespace std;

int main(){

	int t; cin >> t;
	while(t--){
	int n; cin >> n;

    int bestf = 0;	
    int ans = 10e6;
    map<int, int> m;
    while(n--){
    
    string s; int f;
    cin >> s >> f;
    m[f]++;
    }

    for (auto [v,f] : m){
    
	if (f  bestf){
	  besf = f;
	  ans = v;
	}


    }

    cout << ans << "\n";
    

	}

   

	return 0;
}
