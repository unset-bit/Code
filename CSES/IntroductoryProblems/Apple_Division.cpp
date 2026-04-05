#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

int n;
long long int ans = LLONG_MAX;
vector<int> arr;


void solve(int index, long long int set_a, long long int set_b)
{
	if(index == n)
	{
		ans = min(ans, abs(set_a - set_b));
		return;	
	}

	solve(index+1, set_a+arr[index], set_b);
	solve(index+1, set_a, set_b+arr[index]);
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	cin >> n;

	for(size_t i=0; i<n; i++)
	{
		int x;
		cin >> x;
		arr.push_back(x);
	}
	
	solve(0, 0, 0);
	cout << ans << "\n";

	return 0;
}

//calculate all possible functions ans store minimum in global variable.
//use consistent long long int, do not mix LLINT with INT.