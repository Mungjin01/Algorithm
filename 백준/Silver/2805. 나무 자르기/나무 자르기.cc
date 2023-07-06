#include <iostream>
#include <vector>
using namespace std;
int main()
{
	long long n, m, sum;
	cin >> n >> m;

	int max = 0;
	vector <int> v;
	int ans=0;

	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		v.push_back(a);
		if (a > max)
		{
			max = a;

		}

	}
	int left = 0;
	int right = max;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		sum = 0;
		for (int j = 0; j < n; j++)
		{
			if (mid < v[j])sum += v[j] - mid;
		}
		if (sum >= m) {
			if (ans < mid)
			{
				ans = mid;
			}left = mid + 1;
		}
		else { right = mid - 1; }
	}
	cout << ans;
}