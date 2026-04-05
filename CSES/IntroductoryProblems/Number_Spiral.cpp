#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin >> t;

	while(t--)
	{
		int x, y;
		cin >> y >> x;

		long long int m = max(x, y);
		long long int ans = (m -1)*(m - 1);
		if(m % 2 == 0)//clockwise
		{
			if(y > x)
				ans += (2*m - x);
			else
				ans += y;
		}
		else // anti-clockwise
		{
			if(y > x)
				ans += x;
			else
				ans += (2*m - y);
		}
		cout << ans << endl;
	}

	return 0;
}