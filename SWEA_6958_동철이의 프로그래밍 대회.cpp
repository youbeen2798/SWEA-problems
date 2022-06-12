#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int test_case;
int T;
int n, m;

int main(int argc, char** argv)
{

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> n >> m;

		vector <int> v(n);

		int** array = new int *[n];

		for (int i = 0; i < n; i++) {
			array[i] = new int[m];
		}

		for (int i = 0; i < n; i++) {
			int cnt = 0;
			for (int j = 0; j < m; j++) {
				cin >> array[i][j];
				if (array[i][j] == 1) {
					cnt++;
				}
			}
			v[i] = cnt;
		}

		sort(v.begin(), v.end());

		int k = v[v.size() - 1];

		int cnt = 0;
		for (int i = 0; i < v.size(); i++) {
			if (v[i] == k) {
				cnt++;
			}
		}

		cout << "#"  << test_case << " " << cnt << " " << k << "\n";

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}