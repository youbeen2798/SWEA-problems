#include<iostream>
#include <vector>
using namespace std;

int test_case;
int T;
int a, b;
int arr[41];
int main(int argc, char** argv)
{
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> a >> b;
		for (int i = 0; i <= 40; i++) {
			arr[i] = 0;
		}

		for (int i = 1; i <= a; i++) {
			for (int j = 1; j <= b; j++) {
				arr[i + j]++;
			}
		}

		int mx = 0;
		int mx_idx = 0;

		for (int i = 1; i <= 40; i++) {
			if (arr[i] > mx) {
				mx = arr[i];
				mx_idx = i;
			}
		}

		vector <int> v;

		for (int i = 1; i <= 40; i++) {
			if (arr[i] == mx) {
				v.push_back(i);
			}
		}
		cout << "#" << test_case << " ";

		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		}

		cout << "\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}