#include<iostream>
#include<algorithm>
#include<string>
#include<set>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	string s;
	cin >> s;

	set<string> string_set;
	sort(s.begin(), s.end());

	string_set.insert(s);
	while(next_permutation(s.begin(), s.end()))
	{
		string_set.insert(s);
	}

	cout << string_set.size() << "\n";
	for(auto x : string_set)
		cout << x << "\n";

	return 0;
}

//create all permutations of the given string and insert into set
//to avoid the duplications.

//string can be treated as vector for next_permutation function and 
//for sorting into initial string.