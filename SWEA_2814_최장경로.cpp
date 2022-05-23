#include <iostream>

using namespace std;

int test_case;
int T;
int n, m;
int a, b;
bool map[11][11];
bool visited[11];
int dfs_mx = 0;
int mx = 0;

void dfs(int k, int cnt) {

	if (mx < cnt)
		mx = cnt;

	for (int i = 1; i <= n; i++) {
		if (map[k][i] == 1 && visited[i] == 0) {

			visited[i] = 1;
			dfs(i, cnt + 1);
			visited[i] = 0;
		}
	}
}
int main(int argc, char** argv)
{

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		for (int i = 0; i < 11; i++) {
			for (int j = 0; j < 11; j++) {
				map[i][j] = 0;
			}
		}

		for (int i = 0; i < 11; i++) {
			visited[i] = 0;
		}

		cin >> n >> m;

		mx = 0;
		if (n == 1) {
			cout << "#" << test_case << " " << 1 << "\n";
			continue;
		}

		else {
			for (int i = 0; i < m; i++) {
				cin >> a >> b;
				map[a][b] = 1;
				map[b][a] = 1;
			}

			for (int i = 1; i <= n; i++) {

				visited[i] = 1;
				dfs(i, 1);
				visited[i] = 0;
			}
		}
		cout << "#" << test_case << " " << mx << "\n";
	}
}
