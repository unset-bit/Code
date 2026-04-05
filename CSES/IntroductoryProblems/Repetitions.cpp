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

	long long int count=0, max_count=0;
	char last_ch = ' ';
	string s;

	getline(cin , s);

	for(size_t i=0; i<s.length(); i++)
	{
		if(last_ch == s[i])
			count++;
		else
		{
			last_ch = s[i];
			count = 1;
		}

		max_count = max(count, max_count);
	}

	cout << max_count;

	return 0;
}

//do not use == instead of ==, this is very frequent mistake made.

//try to simplify logic before proceeding with code.