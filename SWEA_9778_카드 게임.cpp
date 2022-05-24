#include<iostream>

using namespace std;

int arr[12];
int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int n;
		cin >> n;

		for (int i = 1; i < 12; i++) {
			arr[i] = 4;
		}
		arr[10] = 16;

		int sum = 0;
		for (int i = 0; i < n; i++) {
			int k;
			cin >> k;
			sum += k;
			arr[k]--;
		}

		int cnt1 = 0;
		int cnt2 = 0;
		for (int i = 2; i <= 21 - sum; i++) {
			cnt1 += arr[i];
		}

		cnt2 = 52 - n - cnt1;

		if (cnt2 >= cnt1) {
			cout << "#" << test_case << " " << "STOP" << "\n";
		}
		else {
			cout << "#" << test_case << " " << "GAZUA" << "\n";
		}
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}