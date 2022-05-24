#include<iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	vector <int> v;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int n;
		v.clear();

		cin >> n;

		int sum = 0;
		int k;

		for (int i = 0; i < n; i++) {
			cin >> k;
			v.push_back(k);
			sum += k;
		}

		double average = double(sum) / n;

		int cnt = 0;

		for (int i = 0; i < n; i++) {
			if (average >= v[i])
				cnt++;
		}

		cout << "#" << test_case << " " << cnt << "\n";

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}