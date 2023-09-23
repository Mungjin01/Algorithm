#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, ans;
int main() {
	cin >> n;
	vector <int> rope(n);
	for (int i = 0; i < n; i++) {
		cin >> rope[i];
	}
	sort(rope.begin(), rope.end());
	for (int i = 0; i < rope.size(); i++) {
		ans = max(ans, rope[n - i - 1] * (i + 1));
	}
	cout << ans << '\n';
}