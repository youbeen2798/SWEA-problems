#include<iostream>
#include <string>
using namespace std;

int test_case;
int T;

long long a;
string st;

int main(int argc, char** argv)
{
	
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> a >> st;

		long long num = 0;

		for (int i = 0; i < st.size(); i++) {
			long long k = st[i] - '0';
			num += k;
		}

		cout << num % (a - 1) << "\n";

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}