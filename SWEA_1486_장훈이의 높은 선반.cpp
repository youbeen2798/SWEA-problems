#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int test_case;
int T;
int n, b;
int a;
int mini = 200000;

int arr[20];

void dfs(int cnt, int height) {
	
	if (height >= b) {
		if (mini >= height) {
			mini = height;
		}
	}
	else if (cnt == n) {
		return;
	}
	else {
		dfs(cnt + 1, height + arr[cnt]); // 해당 직원 사용하는경우
		dfs(cnt + 1, height);
	}

}

int main(int argc, char** argv)
{
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		memset(arr,0, sizeof(arr));
		cin >> n >> b;

		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		dfs(0, 0);

		cout << "#" << test_case << " " << mini - b;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}