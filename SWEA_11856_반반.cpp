#include<iostream>
#include <vector>
#include <string>
using namespace std;

int test_case;
int T;
int main(int argc, char** argv)
{
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{

		string ans = "Yes";

		vector <char> v(4);
		vector <int> cn(4);

		for (int i = 0; i < 4; i++) {
			cin >> v[i];
		}

		for (int i = 0; i < 4; i++) {
			int cnt = 0;
			for (int j = 0; j < 4; j++) {
				if (v[i] == v[j]) {
					cnt++;
				}
			}
			cout << cnt << "\n";
			if (cnt != 2) {
				ans = "No";
				break;
			}
		}

		cout << "#" << test_case << " " << ans << "\n";

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}