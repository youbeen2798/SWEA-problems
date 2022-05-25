#include<iostream>

using namespace std;

int test_case;
int T;
int n, k;

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> n >> k;

		if (n % 2 == 0) {
			int answer = n * (n * k + 1) / 2;
			cout << "#" << test_case << " ";
			for (int i = 0; i < k; i++) {
				cout << answer << " ";
			}
			cout << "\n";
			continue;
		}
		else {

			int m = n - 1;
			int answer = m * (m * k + 1) / 2;
			int c = m * k + 1;

			cout << "#" << test_case << " ";
			for (int i = 0; i < k; i++) {
				cout << answer + c << " ";
				c++;
			}
			cout << "\n";
		}


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}