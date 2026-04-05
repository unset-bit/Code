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

	int n, ans = 0;
	cin >> n;

	while(n >= 5)
	{
		n = n/5;
		ans += n;
	}

	cout << ans;
	return 0;
}