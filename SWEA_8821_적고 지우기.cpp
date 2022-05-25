#include<iostream>
#include <string>
#include <cstring>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int arr[10001];

		memset(arr, 0, sizeof(arr));

		string st;
		cin >> st;

		for (int i = 0; i < st.size(); i++) {
			int a = st[i] - '0';
			arr[a]++;
		}

		int cnt = 0;
		for (int i = 0; i <= 10000; i++) {
			if (arr[i] % 2 == 1)
				cnt++;
		}

		cout << "#" << test_case << " " << cnt << "\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}