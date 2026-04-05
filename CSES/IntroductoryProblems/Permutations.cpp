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

	if(n == 2 || n == 3)
	{
		cout << "NO SOLUTION";
		return 0;
	}

	int x = 2;
	while(x <= n)
	{
		cout << x << " ";
		x+=2;
	}
	
	x = 1;
	while(x <= n)
	{
		cout << x << " ";
		x+=2;
	}

	return 0;
}

//in case of 2 and 3 there is no possible to way to print.
//In other cases make sure all even and odd numbers are printed in group
//which will ensure that difference b/w them is atleast 2.

//mistake : must return in case of 2 or 3 after printing NO SOLUTION.
