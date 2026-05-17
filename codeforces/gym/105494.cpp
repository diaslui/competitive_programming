#include <bits/stdc++.h>

using namespace std;

int main()
{

  int n, m;
  cin >> n >> m;

  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  auto test = [&](int k) -> int
  {
    int c = 1;
    for (int i = 1; i < n; i++)
    {
	if (abs(v[i-1] - v[i]) > k){
	   c++;
	}
    }

    return c;
  };


  int low = 1;
  int high = 1000000;
  int ans = -1;

  while (low <= high)
  {
    int mid = (low + high) / 2;
    int q = test(mid);
    
    if (q == m){
    	ans = mid;
    }

    if (q <= m)
    {
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }

  cout << ans << "\n";

  return 0;
}
