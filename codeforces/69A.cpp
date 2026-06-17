#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
#define ll long long

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n; cin >> n;
   int x,y,z;
   x = 0; y = 0; z = 0;
   for (int i=0; i < n; i++){
	int v1, v2, v3;
	cin >> v1 >> v2 >> v3;
	x += v1; y += v2; z += v3;
   }

   if (x == 0 && y == 0 && z == 0){
	cout << "YES";
    }else{
	cout << "NO";
    }

   cout << endl;
   return 0;
}

