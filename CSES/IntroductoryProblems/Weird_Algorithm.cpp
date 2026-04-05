#include<iostream>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	long long int n;
	cin >> n;

	cout << n << " ";
	while(n!=1)
	{
		if(n%2 == 0)
			n /= 2;
		else
			n = (n*3) + 1;

		cout << n << " ";
	}

	return 0;
}

//easy problem need to care for Input limit. must use long long int
//based on input limit.