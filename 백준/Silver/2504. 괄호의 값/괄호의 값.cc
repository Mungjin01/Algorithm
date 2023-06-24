#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int tmp=1;
	int ans=0;
	char pre = ' ';

	stack <char> s;
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '(' || str[i] == '[')
		{
			s.push(str[i]);
			if (str[i] == '(')
				tmp *= 2;
			else
				tmp *= 3;
		}
		else
		{
			if (str[i] == ')')
			{
				if (s.empty()) {
					ans = 0;
					break;
				}
				if (s.top() == '[')
				{
					ans = 0;
					break;
				}
				s.pop();
				if (pre == '(')
				{
					ans += tmp;
					tmp /= 2;
				}
				else {
					tmp /= 2;
				}
			}
			else
			{
				if (s.empty()) {
					ans = 0;
					break;
				}
				if (s.top() == '(') {
					ans = 0;
					break;
				}
				s.pop();

				if (pre == '[')
				{
					ans += tmp;
					tmp /= 3;
				}
				else
					tmp /= 3;
			}
		}
		pre = str[i];

	}
	if (!s.empty())
		ans = 0;

	cout << ans;

	return 0;
}