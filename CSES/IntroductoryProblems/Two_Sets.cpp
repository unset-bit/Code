#include<iostream>
#include<algorithm>
#include<set>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin >> n;

	long long int sum = (1LL*n*(n+1))/2;
	if(sum % 2)
	{
		cout << "NO\n";
		return 0;
	}
	cout << "YES\n";

	set<int> a, b;

	int start = n;
	sum /= 2;

	while(sum > 0 && start > 0)
	{
		if(sum >= start)
		{
			a.insert(start);
			sum -= start;
		}
		start--;
	}

	cout << a.size() <<"\n";
	for(auto x : a)
		cout << x << " ";
	cout << "\n";

	for(int i=1; i<=n; i++)
		if(a.find(i) == a.end())
			b.insert(i);

	cout << b.size() <<"\n";
	for(auto x : b)
		cout << x << " ";
	cout << "\n";

	return 0; 
}


//create two sets, select numbers to make half of sum by greedy
//algorithm and then move remaining numbers to another set, print
//size and content of sets.


//ERROR : total sum will exceed INT_MAX so sum should be calculated
//with limit in mind.