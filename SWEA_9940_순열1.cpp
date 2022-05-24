#include<iostream>
#include <vector>
#include <string>
#include <algorithm>
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
		string answer = "Yes";
		vector <int> v;

		int k;
		for (int i = 0; i < n; i++) {
			cin >> k;
			v.push_back(k);
		}

		sort(v.begin(), v.end());

		for (int i = 0; i < v.size(); i++) {
			if ((i + 1) != v[i]) {
				answer = "No";
			}
		}

		cout << "#" << test_case << " " << answer << "\n";





	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}