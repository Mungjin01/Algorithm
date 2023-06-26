#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	vector <pair<int, int>> m;
	int a, b;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		m.push_back({a, b});
	}
	sort(m.begin(), m.end());
	for (int i = 0; i < n; i++)
	{
		cout << m[i].first << " "<< m[i].second << "\n";
	}
	return 0;

}