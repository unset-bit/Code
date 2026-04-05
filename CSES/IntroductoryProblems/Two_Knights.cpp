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

	cout << 0 << "\n";
	for(long long i=2; i<=n ; i++)
		cout << (i*i)*((i*i)-1)/2 - 4*(i-1)*(i-2) <<"\n";
	
	return 0;
}


//for this problem first we need to find all possible two knights can
//be placed on board which is n^2 * (n^2 - 1)
//then find all possible ways of knights attacking each other
//only can attack in board of 2*3 or 3*2 (2 cases in each box)
//count all such boxes of 2*3 and 3*2
// (n-1)(n-2) and (n-2)(n-1)
//two cases in each box so total count is 4*(n-1)*(n-2)