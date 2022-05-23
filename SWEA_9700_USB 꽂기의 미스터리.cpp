#include<iostream>

using namespace std;

float p, q;
int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> p >> q;

		float s1 = (1 - p) * q;
		float s2 = p * (1 - q) * q;

		cout << s1 << " " << s2 << "\n";

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}