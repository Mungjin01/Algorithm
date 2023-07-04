#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int m;
	cin >> m;

	char button[11];
	bool channels[1000002];

	for (int i = 0; i < m; i++)
	{
		cin >> button[i];
	}
	string num;

	int result = 99999999;
	int result2 = 99999999;
	if (n != 100) {
		for (int i = 0; i < 1000001; i++)
		{
			channels[i] = true;
			num = to_string(i);
			for (int j = 0; j < m; j++) {
				if (num.find(button[j]) != std::string::npos) {
					channels[i] = false;
					break;
				}
			}
		}
		channels[100] = true;
		for (int i = n; i >= 0; i--) {
			if (channels[i]) {
				result = i;
				break;
			}
		}
		for (int i = n; i < n + abs(n - 100); i++) {
			if (channels[i]) {
				result2 = i;
				break;
			}
		}
		int first = abs(result - n) + (to_string(result).length());
		int second = abs(result2 - n) + (to_string(result2).length());
		int third = abs(100 - n);
		if (first <= second) {
			if (first < third) {
				cout << first;
			}
			else {
				cout << third;
			}
		}
		else if (first > second) {
			if (second < third) {
				cout << second;
			}
			else {
				cout << third;
			}
		}
	}
	else {
		cout << 0;
	}
}
