#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int time;
		cin >> time;

		int a = time / 30;
		int b = time % 30;

		cout << "#" << test_case << a << " " << 2 * b << "\n";


	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}