#include<iostream>
#include <cmath>
using namespace std;

int test_case;
int T;
long long answer;
long long n;
int main(int argc, char** argv)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> n;
		answer = (n - 1) * (n - 1) / 4;

		cout << "#" << test_case << " " << answer << "\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}