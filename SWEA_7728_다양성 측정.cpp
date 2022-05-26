#include<iostream>
#include <string>
using namespace std;

int test_case;
int T;
string st;

int main(int argc, char** argv)
{
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> st;

		int array[10] = { 0, };
		int cnt = 0;

		for (int i = 0; i < st.size(); i++) {
			int a = st[i] - '0';
			array[a]++;
		}

		for (int i = 0; i <= 9; i++) {
			if (array[i] != 0)
				cnt++;
		}

		cout << "#" << test_case << " " << cnt << "\n";

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}