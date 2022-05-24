#include<iostream>
#include <vector>
#include <queue>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	int n, m;
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> n >> m;

		int ans = 0;
		int k;
		queue <int> q;
		vector <pair<int, int>> v(n);

		vector <int> w(m+1);

		for (int i = 0; i < n; i++) {
			cin >> k;
			v[i].second = k;
		}

		for (int i = 1; i <= m; i++) {
			cin >> k;
			w[i] = k;
		}
		
		for (int i = 0; i < n; i++) {
			cout << v[i].first << v[i].second << "\n";
		}

		for(int i=0; i<2*m; i++){
			cin >> k; //3
			if (k > 0) {
				int cnt = 0;
				for (int j = 0; j < n; j++) {
					if (v[j].first == 0) {
						v[j].first = k;
						ans += w[k] * v[j].second;
						cnt++;
						break;
					}
				}
				if (cnt == 0)
					q.push(k);
			}
			else {
				for (int j = 0; j < n; j++) {
					if (v[j].first == abs(k)) {
						v[j].first = 0;
						if (!q.empty()) {
							v[j].first = q.front();
							ans += w[q.front()] * v[j].second;
							q.pop();
						}
						break;
					}
				}
			}
		}
		cout << "#" << test_case << " " << ans << "\n";

	}
	
		return 0;//정상종료시 반드시 0을 리턴해야합니다.
	
}