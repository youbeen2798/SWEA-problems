#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
using namespace std;

int test_case;
int T;
string st;

int main(int argc, char** argv)
{

	cin >> T;


	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> st;

		vector <char> v;
		vector<pair <char, int>> vt;
		for (int i = 0; i < st.size(); i++) {
			v.push_back(st[i]);
		}

		sort(v.begin(), v.end());

		
		while (v.size() > 0) { 

				char x = v[0];

				int cnt = 1;

				for (int j = 1; j < v.size(); j++) {
					if (v[j] == x) {
						cnt++; //2
					}
				}
				for (int j = 0; j < cnt; j++) {
					v.erase(v.begin() + 0);
				}

				vt.push_back(make_pair(x, cnt));
		}
		

		int cnt2 = 0;

		for (int i = 0; i < vt.size(); i++) {
			if (vt[i].second % 2 == 0) {
				cnt2++;
			}
		}

		if (cnt2 == vt.size()) {
			cout << "#" << test_case << ' ' << "Good" << "\n";
			continue;
		}
		else {
			cout << "#" << test_case << ' ';
			for (int i = 0; i < vt.size(); i++) {
				if (vt[i].second % 2 != 0) {
					cout <<  vt[i].first;
				}
			}
		}
		
		cout << "\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}