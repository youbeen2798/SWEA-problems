#include<iostream>

using namespace std;

int test_case;
int T;
long long n;

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> n;

		n -= 1;

		if (n % 2 == 0) {
			if (n % 4 != 0) {
				cout << "#" << test_case << " " << 1 << "\n";
				continue;
			}
			else {
				cout << "#" << test_case << " " << 0 << "\n";
				continue;
			}
		}
		else {
			while (1) {
				n = (n - 1) / 2; //5

				if (n % 2 == 0) {
					if (n % 4 != 0) {
						cout << "#" << test_case << " " << 1 << "\n";
						break;
					}
					else {
						cout << "#" << test_case << " " << 0 << "\n";
						break;
					}
				}
			}
		}

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}