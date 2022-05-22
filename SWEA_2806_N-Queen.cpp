#include<iostream>

using namespace std;

int n;
int answer = 0;
bool visited[10][10];

bool istrue(int, int, int);

void dfs(int n, int row, int col, int queen) {
	if (n == queen) {
		answer++;
		return;
	}
	else {
		for (int i = 0; i < n; i++) {
			if (istrue(n,row,i)) {
				visited[row][i] = 1;
				dfs(n, row + 1, 0, queen + 1);
				visited[row][i] = 0;
			}
		}
	}
}

bool istrue(int n, int row, int col)
{
	//가로
	for (int i = 0; i < n; i++) {
		if (visited[row][i] == 1)
			return false;
	}

	//세로
	for (int i = 0; i < n; i++) {
		if (visited[i][col] == 1) {
			return false;
		}
	}

	//우측 상방 대각
	for (int i = row, j=col; i>=0 && j <n; i--, j++) {
		if (visited[i][j] == 1) {
			return false;
		}
	}

	//우측 하방 대각
	for (int i = row, j = col; i < n && j < n; i++, j++) {
		if (visited[i][j] == 1) {
			return false;
		}
	}
	//좌측 상방 대각
	for (int i = row, j = col; i >= 0 && j >=0; i--, j--) {
		if (visited[i][j] == 1) {
			return false;
		}
	}	
	
	//좌측 하방 대각
	for (int i = row, j = col; i < n && j >=0; i++, j--) {
		if (visited[i][j] == 1) {
			return false;
		}
	}
	return true;
}
int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> n;
		
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				visited[i][j] = 0;
			}
		}

		answer = 0;
		dfs(n, 0, 0, 0);

		cout << "#" << test_case << " " << answer << "\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}