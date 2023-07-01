#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector <int> v1;
	int arr1;
	for (int i = 0; i < n; i++)
	{
		cin >> arr1;
		v1.push_back(arr1);
	}
	sort(v1.begin(), v1.end());

	int m;
	cin >> m;
	int arr2;
	for (int i = 0; i < m; i++)
	{
		cin >> arr2;
		cout << upper_bound(v1.begin(), v1.end(), arr2) - lower_bound(v1.begin(), v1.end(), arr2) << " ";
	}

}