#include<iostream>
#include <string>
using namespace std;

int test_case;
int T;
int N;
string st;
int cnt = 0;
int cnt2 = 0;
int cnt3 = 0;
int cnt4 = 0;
string answer;

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		answer = "NO";
		cin >> N;

		int** array = new int* [N];

		for (int k = 0; k < N; k++) {
			array[k] = new int[N];
		}

		for (int i = 0; i < N; i++) {
			cin >> st;
			for (int j = 0; j < N; j++) {
				if (st[j] == 'o') {
					array[i][j] = 1;
				}
				else
					array[i][j] = 0;
			}
		}

		for (int d = 0; d <= N - 5; d++) { //세로
			for (int k = 0; k < N; k++) {
				cnt3 = 0;
				for (int j = d; j < d + 5; j++) {
					if (array[j][k] == 1) {
						cnt3++;
					}
				}
				if (cnt3 == 5) {
					answer = "YES";
				}
			}
		}

		for (int i = 0; i < N; i++) { //가로 
			for (int j = 0; j <= N - 5; j++) {
				cnt2 = 0;
				for (int k = j; k < j + 5; k++) {
					if (array[i][k] == 1)
						cnt2++;
				}
				if (cnt2 == 5) {
					answer = "YES";
				}
			}
		}
		//대각선(왼쪽 위에서 오른쪽 아래로)
		for (int i = 0; i <= N - 5; i++) {
			for (int k = 0; k <= N - 5; k++) {
				cnt = 0;
				for (int j = i, d = k; j < i + 5; j++, d++) {
					if (array[j][d] == 1) {
						cnt++;
					}
				}
				if (cnt == 5)
					answer = "YES";
			}
		}

		//대각선(오른쪽 위에서 왼쪽 아래로)
		for (int i = 0; i <= N - 5; i++) {
			for (int k = 4; k < N; k++) {
				cnt4 = 0;
				for (int j = i, d = k; j < i + 5; j++, d--) {
					if (array[j][d] == 1) {
						cnt4++;
					}
				}
				if (cnt4 == 5)
					answer = "YES";
			}
		}

		cout << "#" << test_case << " " << answer << "\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}