#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

vector<long long int> inter(1000009);
#define MOD 1000000007

long long int _inter(int x)
{
    if(x < 0)
        return 0;
    if(x == 0)
        return 1;
    return inter[x];
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

    int n;
	cin >> n;

    
    inter[1] = 1;
    for(int i=2; i<=n; i++)
    {
        inter[i] = (_inter(i-1)+_inter(i-2)+_inter(i-3)+_inter(i-4)+_inter(i-5)+_inter(i-6))%MOD;
    }
	
    cout << inter[n] << endl;

	return 0;
}