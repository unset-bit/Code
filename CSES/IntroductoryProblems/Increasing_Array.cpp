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

	int n, input, last_int=0;
	long long int ans = 0;

	cin >> n;
	cin >> last_int;
	n--;

	while(n--)
	{
		cin >> input;
		if(input < last_int)
			ans += (last_int - input);
		last_int = max(last_int, input);
	}

	cout << ans << endl;
	return 0;
}

//easy, passed in single attempt
//keep in mind ans can be long long int as sum can exceed INT_MAX