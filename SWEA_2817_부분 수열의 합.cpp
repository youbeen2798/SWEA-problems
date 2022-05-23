#include<iostream>
#include <vector>
#include <cstring>
using namespace std;

int test_case;
int T;
int n, k, input;
int cnt;
int arr[20];

vector <int> v;

int main(int argc, char** argv)
{
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		v.clear();
		memset(arr, 0, sizeof(arr));

		cnt = 0;
		cin >> n >> k;


		for (int i = 0; i < n; i++) {
			cin >> input;
			arr[i] = input;
		}

		for (int i = 0; i < n; i++) {

			int v_size = v.size();

			v.push_back(arr[i]);
			if (arr[i] == k)
				cnt++;

			for (int j = 0; j < v_size; j++) {

				v.push_back(v[j] + arr[i]);
				if (v[j] + arr[i] == k)
					cnt++;
			}

		}
		if (n == 1 && k == arr[0]) {
			cnt = 1;
		}

		cout << "#" << test_case << " " << cnt << "\n";

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}