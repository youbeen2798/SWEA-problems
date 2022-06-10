#include<iostream>

using namespace std;

int test_case;
int T;
string a, b;
int main(int argc, char** argv)
{
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int cnt = 0;
		cin >> a >> b;

		if (a.size() != b.size()) {
			cout << "#" << test_case << " " << "DIFF" << "\n";
			continue;
		}
		else {
			for (int i = 0; i < a.size(); i++) {
				cnt++;
				int hi = 0;
				int hello = 0;
				if ((a[i] == 'A') || (a[i] == 'D') || (a[i] == 'O') || (a[i] == 'P') || (a[i] == 'Q') || (a[i] == 'R')) {
					hi = 1;
				}
				if (a[i] == 'B') {
					hi = 2;
				}
				if ((b[i] == 'A') || (b[i] == 'D') || (b[i] == 'O') || (b[i] == 'P') || (b[i] == 'Q') || (b[i] == 'R')) {
					hello = 1;
				}
				if (b[i] == 'B') {
					hello = 2;
				}
				if (hi != hello) {
					cout << "#" << test_case << " " << "DIFF" << "\n";
					break;
				}
				if (cnt == a.size()) {
					cout << "#" << test_case << " " << "SAME" << "\n";
				}
			}
		}
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}

