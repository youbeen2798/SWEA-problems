#include<iostream>

using namespace std;

int test_case;
int T;
int n;

int main(int argc, char** argv)
{
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		string ans = "No";

		cin >> n;


		if (1 <= n && n <= 9) {
			cout << "#" << test_case << " " << "Yes" << "\n";
			continue;
		}
		else {
			for (int i = 1; i <= 9; i++) {
				if (n % i == 0) {
					int a = n / i;
					if (1 <= a && a <= 9) {
						ans = "Yes";
						cout << "#" << test_case << " " << ans << "\n";
						break;
					}
				}
			}
	
		}

		if (ans == "No") {
			cout << "#" << test_case << " " << ans << "\n";
		}


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}