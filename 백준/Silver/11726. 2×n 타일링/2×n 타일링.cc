#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int a;
	cin >> a;

	vector<int> dp;
	dp.push_back(1);
	dp.push_back(2);
	for (int i = 2; i < a; i++) {
		dp.push_back((dp[i - 1] + dp[i - 2]) % 10007);
	}
	
	cout << dp[a-1];
}