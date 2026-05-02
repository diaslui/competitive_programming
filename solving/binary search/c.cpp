#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long n, t;
	cin >> n >> t;

	vector<long long> s(n);
	long long mine = 10e18;
	for (long long i = 0; i < n; i++)
	{
		cin >> s[i];
		mine = min(mine, s[i]);
	}

	auto test = [&](long long x) -> bool
	{
		long long a = 0;
		for (long long i : s)
		{
			a += (x / i);
			if (a >= t)
			{
				return 1;
			}
		}
		return 0;
	};

	long long high = mine * t;
	long long low = 0;
	long long ans = -1;
	while (low <= high)
	{
		long long mid = (low + high) / 2;
		bool v = test(mid);

		if (v)
		{
			ans = mid;
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
