#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int n;
		cin >> n;

		char* arr1 = new char[n];
		char* arr2 = new char[n];

		for (int i = 0; i < n; i++) {
			cin >> arr1[i];
		}

		for (int i = 0; i < n; i++) {
			cin >> arr2[i];
		}

		int cnt = 0;
		for (int i = 0; i < n; i++) {
			if (arr1[i] == arr2[i])
				cnt++;
		}

		cout << "#" << test_case << " " << cnt << "\n";

	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}