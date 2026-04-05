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

	int n;
	cin >> n;

	while(n--)
	{
		int x, y;
		cin >> x >> y;

		if((2*x - y)%3 || (2*x - y) < 0 ||
			(2*y - x)%3 || (2*y - x) < 0)
			cout << "NO\n";
		else
			cout << "YES\n";
	}

	return 0;
}

/*
lets say we remove 1 a times and 2 b times to make both piles 0.
a + 2b = x
2a + b = y

now by solving equation we will get
a = (2x-y)/3 and b = (2y-x)/3
since a and b are +ve integers
2x-y and 2y-x must be divisible by 3 and >= 0.
*/