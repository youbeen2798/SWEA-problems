#include<iostream>
#include <vector>
using namespace std;

int test_case;
int T;
vector <int> v;
int n;
int input;
long long sum;
int main(int argc, char** argv)
{
	
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		sum = 0;
		v.clear();

		cin >> n;

		for (int i = 0; i < n; i++) {
			cin >> input;

			if (input == 0) {
				v.pop_back();
			}
			else {
				v.push_back(input);
			}
		}

		for (int i = 0; i < v.size(); i++) {
			sum += v[i];
		}

		cout << "#" << test_case << " " << sum << "\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}