#include<iostream>

using namespace std;

int test_case;
int T;
int n;
int k;
int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{

		cin >> k;

		double d = double(k) / double(1000);

		if (d < 0.1) {
			cout << "#" << test_case << " " << 0 << "\n";
		}
		else if (0.1 <= d && d < 1) {
			cout << "#" << test_case << " " << 1 << "\n";
		}
		else if (1 <= d && d < 10) {
			cout << "#" << test_case << " " << 2 << "\n";
		}
		else if (10 <= d && d < 100) {
			cout << "#" << test_case << " " << 3 << "\n";
		}
		else if (100 <= d && d < 1000) {
			cout << "#" << test_case << " " << 4 << "\n";
		}
		else {
			cout << "#" << test_case << " " << 5 << "\n";
		}

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}