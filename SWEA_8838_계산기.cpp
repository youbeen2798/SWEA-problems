#include<iostream>
#include <vector>
using namespace std;

int test_case;
int T;
int temp;

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int n;
		cin >> n;

		vector <int> v;

		for (int i = 0; i < n; i++) {
			int k;
			cin >> k;
			v.push_back(k);
		}

		if (v.size() == 1) {
			cout << "#" << test_case << " " << v[0] << "\n";
			continue;
		}
		else {
			for (int i = 0; i < v.size(); i++) {
				if (i == 0) {
					temp = max(v[i] * v[i + 1], v[i] + v[i + 1]);
					i++;
				}
				else {
					temp = max(temp * v[i], temp + v[i]);
				}
			}

		}
		cout << "#" << test_case << " " << temp << "\n";

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}