#include<iostream>
using namespace std;
int test_case;
int T;
int n;
int d;

int main(int argc, char** argv)
{
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int cnt = 0;
		cin >> n >> d;

		int start = 1 + d;
		int end = n - d;

		if (start >= end) {
			cout << "#" << test_case << " " << 1 << "\n";
			continue;
		}
		else if (start < end) {
			for (int i = start + (2 * d) + 1; i < end; i += 2 * d + 1) {
				cnt++;
			}
		}
		cout << "#" << test_case << " " << cnt + 2 << "\n";


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}