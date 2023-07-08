#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		int b;
		cin >> b;
		long long dp[101];
		dp[0] = dp[1] = dp[2] = dp[3] = 1;
		dp[4] = dp[5] = 2;
		for (int j = 6; j <= b; j++)
		{
			dp[j] = dp[j - 1] + dp[j - 5];
		}
		cout << dp[b] << "\n";
	}

}