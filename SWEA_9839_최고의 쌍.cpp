#include<iostream>
#include <vector>
#include <string>
using namespace std;

int test_case;
int T;
vector <int> v;
int n;
int c;
int main(int argc, char** argv)
{
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		v.clear();
		c = -1;
		cin >> n;

		int k;
		for (int i = 0; i < n; i++) {
			cin >> k;
			v.push_back(k);
		}

		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				string k = to_string(v[i] * v[j]);

				int cnt = 0;
				for (int j = 0; j < k.size() - 1; j++) {
					if (k[j] + 1 == k[j + 1])
						cnt++;
				}

				if (cnt == k.size() - 1) {
					if (c < v[i] * v[j]) {
						c = v[i] * v[j];
					}
				}
			}
		}
		cout << "#" << test_case << " " << c << "\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}