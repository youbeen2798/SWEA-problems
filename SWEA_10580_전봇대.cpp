#include<iostream>
#include <vector>

using namespace std;

vector <pair<int, int>> v;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int cnt = 0;
		int m;
		v.clear();
		cin >> m;

		for (int i = 0; i < m; i++) {
			int x, y;
			cin >> x >> y;
			v.push_back(make_pair(x, y));
		}

		for (int i = 0; i < m; i++) {
			for (int j = i + 1; j < m; j++) {
				if (((v[i].first > v[j].first) && (v[i].second < v[j].second))
					|| ((v[i].first < v[j].first) && (v[i].second > v[j].second))) {
					cnt++;
				}
			}
		}

		cout << "#" << test_case << " " << cnt << "\n";



	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}