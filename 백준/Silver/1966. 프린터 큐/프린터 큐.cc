// 우선순위 큐 사용
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
const int INF = 2e9;
const int inf = 1e9;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		queue<pair<int, int>> que;
		priority_queue<int> pq; 
		for (int i = 0; i < n; i++) {
			int p;
			cin >> p;
			que.push({p, i}); 
			pq.push(p);
		}
		int ans = 1;
		while(1) {
			int p = que.front().first;
			int nth = que.front().second;
			if (p != pq.top()) {
				que.pop();
				que.push({p, nth});
			}
			else {
				if (nth == m) break;
				else {
					que.pop();
					pq.pop();
					ans++;
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;
}