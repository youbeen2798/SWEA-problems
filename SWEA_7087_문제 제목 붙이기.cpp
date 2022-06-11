#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;


int test_case;
int T;
int num;
string st;

int main(int argc, char** argv)
{
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		bool arr[44];

		for (int i = 17; i <= 43; i++) {
			arr[i] = false;
		}

		cin >> num;
		
		vector <char> v;

		for (int i = 0; i < num; i++) {
			cin >> st;
			v.push_back(st[0]);
		}

		sort(v.begin(), v.end());

		v.erase(unique(v.begin(), v.end()), v.end());

		for (int i = 0; i < v.size(); i++) {
//			cout << v[i] << " ";
			int h = v[i] - '0';
			arr[h] = true;
		}

		cout << "\n";

		for (int i = 17; i <= 43; i++) {
			if (arr[i] == false) {
				cout << "#" << test_case << " " << i - 17 << "\n";
				break;
			}
		}
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}