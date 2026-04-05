#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	string s;
	cin >> s;

	vector<int> counter(26);
	string final="", ans="";
	bool mid_taken = false;
	char mid = '?';

	for(auto c: s)
		counter[c-'A']++;

	for(int i=0; i<26; i++)
	{
		if(counter[i]%2 == 1 && mid_taken)
		{
			cout << "NO SOLUTION\n";
			return 0;
		}
		else
		{
			if(counter[i]%2 == 1)
			{
				mid_taken = true;
				mid = 'A'+i;
			}
			ans += string(counter[i]/2, ('A'+i));
		}
	}
		
	final = ans;

	if(mid_taken)
		final += mid;
	
	reverse(ans.begin(), ans.end());
	final += ans;

	cout << final << "\n";
	return 0;
}

//Ideas is to construct first half then add middle element and add
//another reversed half

//ERROR to keep in mind.
//if no mid_taken then do not add mid
//use of string(count, char) to construct string with char count
//in case of odd count, only 1 will be mid remaining count will
//be used to construct palidrome half.
//always return after printing "NO SOLUTION"