#include<iostream>
#include <string>

using namespace std;

int test_case;
int T;

int main(int argc, char** argv)
{
	string st;
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> st;

		long long a = 1;
		long long b = 1;

		for (int i = 0; i < st.size(); i++) {
			if (st[i] == 'L') {
				b = a + b;
			}
			else if (st[i] == 'R') {
				a = a + b;
			}
		}

		cout << "#" << test_case << " " << a << " " << b << "\n";

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}