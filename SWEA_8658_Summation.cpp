#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

string st;
int test_case;
int T;

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		vector <int> v;

		for (int i = 0; i < 10; i++) {
			cin >> st;
			long long sum = 0;
			for (int j = 0; j < st.size(); j++) {
				int a = st[j] - '0';
				sum += a;
			}
			v.push_back(sum);
		}

		sort(v.begin(), v.end());
		cout << "#" << test_case << " " << v[v.size() - 1] << " " << v[0] << "\n";

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}