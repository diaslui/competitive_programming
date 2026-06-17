#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 * 10
#define endl "\n"
#define ll long long

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n, t; cin >> n >> t;
   string s; cin >> s;
   
   while(t--){	
   for (int i=0; i < n-1; i++){
      
     if (s[i] == 'B' && s[i+1] == 'G'){
	swap(s[i], s[i+1]);
	i++;
      }
	

    }
}
   cout << s << endl;
   return 0;
}

