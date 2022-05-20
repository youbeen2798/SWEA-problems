#include <iostream>
#define MAX 10000000
using namespace std;

int T;
int map[4][4];
bool checkNum[MAX];
int result = 0;

int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

void dfs(int x, int y, int number, int idx) {

	if (idx == 7) {
		checkNum[number] = 1;
		return;
	}

	number *= 10;
	number += map[x][y];

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (0 <= nx && nx < 4 && 0 <= ny && ny < 4) {
			dfs(nx, ny, number, idx + 1);
		}
	}
}
int main() {

	cin >> T;

	for (int test_case = 1; test_case <= T; test_case++) {

		memset(checkNum, 0, sizeof(checkNum) * sizeof(bool));
		result = 0;

		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				cin >> map[i][j];
			}
		}

		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				dfs(i, j, 0, 0);
			}
		}

		for (int i = 0; i < MAX; i++) {
			if (checkNum[i] == 1) {
				result++;
			}
		}

		cout << "#" << test_case << " " << result << "\n";

	}
	
}