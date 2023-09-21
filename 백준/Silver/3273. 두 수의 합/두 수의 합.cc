#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	vector <int> v;
	for (int i = 0; i < a; i++)
	{
		cin >> b;
		v.push_back(b);
	}
	cin >> c;
	sort(v.begin(), v.end());

	int d = 0, e = 0;
	int f = a - 1;

	while (1)
	{
		if (d >= f) break;
		int sum = v[d] + v[f];
		if (sum == c)
		{
			e++;
			d++;
			f--;
		}
		else if (sum < c) {
			d++;
		}
		else
			f--;
	}
	cout << e;
	return 0;
}