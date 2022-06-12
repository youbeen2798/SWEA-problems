#include<iostream>

using namespace std;

int test_case;
int T;
int N, M;

int main(int argc, char** argv)
{
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin >> N >> M;
		
		long long ans = 0;
		string* arr = new string[N];
		int* arr2 = new int[N];

		int* arr_num = new int[N];

		string* arr3 = new string[M];

		for (int i = 0; i < N; i++) {
			cin >> arr[i] >> arr2[i];
		}

		for (int i = 0; i < N; i++) {
			int cnt = 0;
			for (int j = 0; j < 8; j++) {
				if (arr[i][j] != '*') {
					cnt++;
				}
			}
			arr_num[i] = cnt;
		}

		for (int i = 0; i < M; i++) {
			cin >> arr3[i];
		}
		
		
		for (int i = 0; i < N; i++) {
			int cnt = 0;
			for (int k = 0; k < M; k++) {
				for (int j = 0; j < 8; j++) {
					if (arr[i][j] != '*' && arr[i][j] == arr3[k][j]) {
						cnt++;
					}
				}
				if (cnt == arr_num[i]) {
					ans += arr2[i];
				}
				cnt = 0;
			}			
		}
		cout << "#" << test_case << " " << ans << "\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
