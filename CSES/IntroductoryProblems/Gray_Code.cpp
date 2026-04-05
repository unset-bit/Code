#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<bitset>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin >> n;

	int result_count = 1 << n;
	for(size_t i=0; i< result_count; i++)
	{
		int gray = i^(i>>1);
		bitset<32> b(gray); //convert to bitset

		//print only last n binary digits.
		cout << b.to_string().substr(32-n) << "\n";
	}

	return 0;
}

//gray code for a number i = i^(i>>1).
//convert to bitset and then string and print last n digits.


/*
vector<string> gray(int n)
{
	if(n == 1)
		return {"0", "1"};

	vector<string> prev_code = gray(n-1);

	vector<string> reversed_code = prev_code;
	reverse(reversed_code.begin(), reversed_code.end());

	size_t code_size = prev_code.size();
	for(size_t i=0; i<code_size; i++)
	{
		prev_code[i] = "0" + prev_code[i];

		string add_one = "1" + reversed_code[i];
		prev_code.push_back(add_one);
	}
	return prev_code;
}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin >> n;

	vector<string> gray_code = gray(n);

	for(auto code : gray_code)
		cout << code << "\n";

	return 0;
}

//Recursive approach uses code for (n-1) and reverses it and appends.
//for base case of n==1, return {"0", "1"}

//ERROR : do not iterate with vector size and increase vector size 
//inside loop. Easy to overlook this mistake.
*/