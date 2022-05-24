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
		int n, m;
		int mx = -1;
		cin >> n >> m;
		
		int k;
		vector <int> v;

		for (int i = 0; i < n; i++) {
			cin >> k;
			v.push_back(k);
		}

		/*
		for (int i = 0; i < n; i++) {
			cout << v[i] << " ";
		}
		*/

		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				int sum = v[i] + v[j];
//				cout << "sum: " << sum << "\n";
				if (sum <= m && mx < sum) {
					mx = sum;
				}
			}
		}
		cout << "#" << test_case << " " << mx << "\n";


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}