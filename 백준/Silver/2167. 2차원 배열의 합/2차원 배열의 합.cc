#include <iostream>
using namespace std;
 
int main() {
    int n, m, num[301][301],k;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> num[i][j];
        }
    }
    cin >> k;
    for (int a = 0; a < k; a++) {
        int i, j, x, y, sum=0;
        cin >> i >> j >> x >> y;
        for (int start = i - 1; start < x; start++) {
            for (int end = j - 1; end < y; end++) {
                sum += num[start][end];
            }
        }
        cout << sum << '\n';
    }
 
    return 0;
}
