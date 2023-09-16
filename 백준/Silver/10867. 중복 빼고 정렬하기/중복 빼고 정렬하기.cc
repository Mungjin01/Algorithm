#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector <int> arr;

	int m;
	for (int i = 0; i < n; i++) {
		cin >> m;
		arr.push_back(m);
	}
	sort(arr.begin(), arr.end());

	int temp = 0;
	for (int i = 0; i < n; i++)
	{
		if (temp == arr[i])
		{
			continue;
		}
		cout << arr[i] << " ";
		temp = arr[i];

	}
	return 0;
}