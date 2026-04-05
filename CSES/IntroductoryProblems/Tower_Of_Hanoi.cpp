#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

void solve(int n, int from, int to, int with)
{
	if(n == 0)
		return;

	solve(n-1, from, with, to);
	cout << from << " " << to << "\n";
	solve(n-1, with, to, from);
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin >> n;

	cout << (1<<n) - 1 << "\n";
	solve(n, 1, 3, 2);

	return 0;
}


//step 1 : move n-1 discs from source to helper using destination
//step 2 : move nth disc from source to dest
//step 3 : move n-1 discs from helper to dest using source