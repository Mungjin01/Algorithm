#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	string n;
	cin >> n;

	int answ=0;

	vector<int> s;

	for (int i = 0; i < n.size(); ++i)
	{
		s.push_back(n[i] - '0');
	}
	sort(s.rbegin(), s.rend());

	for (int i = 0; i < s.size(); ++i)
	{
		answ += s[i];
		
	}
	if (answ % 3 != 0)
		printf("-1");
	else if (s[s.size() - 1] != 0)
		printf("-1");
	else {
		for (auto ans : s)
			printf("%d", ans);
	}

}