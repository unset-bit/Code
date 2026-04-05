#include<iostream>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	long long int n, input, sum=0;
	cin >> n;

	for(int i=1; i<n; i++)
	{
		cin >> input;
		sum += input;
	}

	cout << (n*(n+1))/2 - sum;
	return 0;
}

//what is the seven hell now I forgot sum formuale, 
//IT IS n(n+1)/2 NOT n(n-1)/2

//still failed again due to use of int instead of long long,
//limit is 2*10^5 so sum WILL exceed int value.