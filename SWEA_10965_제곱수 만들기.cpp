#include<iostream>
#include <algorithm>
using namespace std;

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int k;
		int result = 1;
		cin >> k;

		for (int i = 2; i * i <= k; i++) {
			int cnt = 0;
			while (k % i == 0) {
				cnt++;
				k /= i;
			}
			if (cnt % 2 == 1) {
				result *= i;
			}
		}
		if (k > 1) {
			result *= k;
		}

		cout << "#" << test_case << " " << result << "\n";

	
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}