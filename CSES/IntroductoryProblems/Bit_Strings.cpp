#include<iostream>
#include<algorithm>
#include<string>

#define MOD 1000000007

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin >> n;

	long long int ans = 1;

	while(n--)
	{
		ans = (ans*2)%MOD;
	}

	cout << ans;
	
	return 0; 
}