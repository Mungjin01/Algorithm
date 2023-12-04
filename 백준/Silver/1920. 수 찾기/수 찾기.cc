#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>

using namespace std;

int N = 0;
int M = 0;
int num = 0;
vector<int> vecA;

void binarySearch(int target);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		vecA.push_back(num);
	}

	sort(vecA.begin(), vecA.end());

	cin >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> num;
		binarySearch(num);
	}
}

void binarySearch(int target)
{
	int low = 0;
	int high = vecA.size() - 1;

	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (target == vecA[mid])
		{
			cout << "1" << "\n";
			return;
		}
		else if (target < vecA[mid])
		{
			high = mid - 1;
		}
		else if (target > vecA[mid])
		{
			low = mid + 1;
		}
	}

	cout << "0" << "\n";
}