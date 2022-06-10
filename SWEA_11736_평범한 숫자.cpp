#include<iostream>
#include <vector>
using namespace std;

int test_case;
int T;
int num;

int main(int argc, char** argv)
{
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int cnt = 0;
		cin >> num;
		vector <int> n(num);
		for (int i = 0; i < num; i++) {
			cin >> n[i];
		}

		for (int i = 1; i < num-1; i++) {
			if ((n[i - 1] < n[i]) && (n[i] < n[i + 1])) {
				cnt++;
			}
			cout << "hi" << "\n";
			if ((n[i - 1] > n[i]) && (n[i] > n[i + 1])) {
				cnt++;
			}
			cout << "hi2" << "\n";
		}

		cout << "#" << test_case << " " << cnt << "\n";

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}