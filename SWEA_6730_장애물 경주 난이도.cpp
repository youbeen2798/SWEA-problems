#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int test_case;
int T;
int N;
int ans1;
int ans2;
int main(int argc, char** argv)
{
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> N;
		
		int* array = new int[N];

		vector <int> v1; //올라가기
		vector <int> v2; //내려가기

		for (int i = 0; i < N; i++) {
			cin >> array[i];
		}

		for (int i = 0; i < N - 1; i++) {
			if (array[i] > array[i + 1]) {
				v2.push_back(array[i] - array[i + 1]);
			}
			else {
				v1.push_back(array[i + 1] - array[i]);
			}
		}

		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());
		
		if (v1.empty()) {
			ans1 = 0;
		}
		else {
			ans1 = v1[v1.size() - 1];
		}

		if (v2.empty()) {
			ans2 = 0;
		}
		else {
			ans2 = v2[v2.size() - 1];
		}

		cout << "#" <<  test_case << " " << ans1 << " " << ans2 << "\n";

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}