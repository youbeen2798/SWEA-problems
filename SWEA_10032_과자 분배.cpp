#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int n, k;
		cin >> n >> k;

		cout << "#" << test_case << " " << n % k << "\n";

	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}