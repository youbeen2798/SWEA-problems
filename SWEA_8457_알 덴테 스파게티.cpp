#include<iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int n, b, e;
		cin >> n >> b >> e;
		
		int start = b - e;
		int end = b + e;

		vector <int> v(n);

		for (int i = 0; i < n; i++) {
			int k;
			cin >> k;
			v[i] = k;
		}

		int cnt = 0;

		cout << "start: " << start << "\n";
		cout << "end: " << end << "\n";

		for (int i = 0; i < v.size(); i++) { //v[0] = 3. v[1] = 4
			for (int k = start; k <= end; k++) {
				if (k % v[i] == 0) {
					cnt++;
					break;
				}
			}
		}


		cout << "cnt: " << cnt << "\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}