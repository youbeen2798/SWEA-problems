#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int n;
		cin >> n;

		int* array = new int[n];

		int sum = 0;
		int mx = 0;
		for (int i = 0; i < n; i++) {
			int k;
			cin >> k;
			array[i] = k;
			sum += k;
			if (mx < k)
				mx = k;
		}

		sum = sum + mx + n;

		cout << sum << "\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}