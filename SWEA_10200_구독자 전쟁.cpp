#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int n, a, b;

		cin >> n >> a >> b;

		cout << "#" << test_case << " ";
		cout << min(a, b) << " ";

		if ((a + b - n) < 0)
			cout << 0 << "\n";
		else
			cout << a + b - n << "\n";
		

	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}