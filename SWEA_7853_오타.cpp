#include<iostream>
#include <cmath>
using namespace std;

long long t = pow(10, 9) + 7;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		string st;
		cin >> st;

		int cnt = 0;
		long long result = 1;

		if (st.size() == 1) {
			cout << "#" << test_case << " " << 1 << "\n";
		}
		else if (st.size() == 2) {
			result = 1;
			for (int i = 0; i < st.size(); i++) { //i = 0 1
				if (i == 0) {
					if (st[i] != st[i + 1]) {
						cnt = 2;
						result *= cnt;
					}
				}
				if (i == 1) {
					if (st[i - 1] != st[i]) {
						cnt = 2;
						result *= cnt;
					}
				}
			}
			cout << "#" << test_case << " " << result << "\n";
		}
		else {
			result = 1;
			for (int i = 0; i < st.size(); i++) {

				if (i == 0) {
					if (st[i] != st[i + 1]) {
						cnt = 2;
					}
					else {
						cnt = 1;
					}
					result *= cnt;
					result = result % t;
				}
				else if (i == (st.size() - 1)) {
					if (st[i] != st[i - 1]) {
						cnt = 2;
						result *= cnt;
					}

					result = result % t;
				}
				else {
					cnt = 1;
					if (st[i - 1] == st[i] && st[i] == st[i + 1]) {
						cnt = 1;
					}
					else {
						if (st[i] != st[i - 1]) {
							cnt++;
						}
						if (st[i] != st[i + 1]) {
							cnt++;
						}
						if (st[i - 1] == st[i + 1]) {
							cnt--;
						}
					}
					result *= cnt;
					result = result % t;
				}
			}

			cout << "#" << test_case << " " << result << "\n";

		}

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}