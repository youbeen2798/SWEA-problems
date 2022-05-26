#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N, D;
		cin >> N >> D;

		bool* array = new bool[N];

		for (int i = 0; i < N; i++) {
			cin >> array[i];
		}

		int cnt = 0;
		int answer = 0;

		for (int i = 0; i < N; i++) {
			if (array[i] == 0) {
				cnt++;
			}
			if (cnt == D) {
				answer++;
				cnt = 0;
			}
			if (array[i] == 1) {
				cnt = 0;
			}
		}
		cout << "#" << test_case << " " << answer << "\n";

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}