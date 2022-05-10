#include<iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;


	for (test_case = 1; test_case <= T; ++test_case)
	{
		vector <bool> arr;
		vector <bool >arr2;

		int n;
		cin >> n;

		int cnt2 = 0;
		for (int i = 0; i < 7; i++) {
			int k;
			cin >> k;
			arr.push_back(k);
			if (k == 1)
				cnt2++;
		}

		arr2 = arr;

		int mn = 7;
		for (int m = 0; m <= 6; m++) {
			int cnt = 0;

			for (int i = 0; i < m; i++) {
				arr.push_back(arr.front());
				arr.erase(arr.begin() + 0);
			}

			if (n % cnt2 != 0) {
				for (int i = 0; i < arr.size(); i++) {
					if (arr[i] == 1)
						cnt++;
					if (cnt == (n % cnt2)) {
						if (i + 1 < mn) {
							mn = i + 1;
						}
						break;
					}
				}
			}
			else {
				for (int i = 0; i < arr.size(); i++) {
					if (arr[i] == 1) {
						cnt++;
					}

					if (cnt == cnt2) {
						if (i + 1 < mn) {
							mn = i + 1;
						}
						break;
					}
				}
			}

			arr = arr2;
		}

		if (n % cnt2 == 0) {
			cout << "#" << test_case << ' ' << 7 * (n / cnt2 - 1) + mn << "\n";
		}
		else
			cout << "#" << test_case << ' ' << 7 * (n / cnt2) + mn << "\n";

		arr.clear();
		arr2.clear();

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}