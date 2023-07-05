#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;

vector <int> g[1001];
bool check[1001];

void dfs(int x)
{
	check[x] = true;
	cout << x << " ";
	for (int i = 0; i < g[x].size(); i++)
	{
		int y = g[x][i];
		if (!check[y])
		{
			dfs(y);
		}
	}
}
void bfs(int start)
{
	queue <int> q;
	q.push(start);
	check[start] = true;

	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		cout << x << ' ';

		for (int i = 0; i < g[x].size(); i++)
		{
			int y = g[x][i];
			if (!check[y])
			{
				q.push(y);
				check[y] = true;
			}
		}
	}

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, v = 0;
	

	cin >> n >> m >> v;

	int a, b;
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		g[a].push_back(b);
		g[b].push_back(a);
		
	}
	for (int i = 1; i <= n; i++)
		sort(g[i].begin(), g[i].end());
	dfs(v);
	cout << "\n";
	memset(check, false, sizeof(check));
	bfs(v);
}