#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int a, b;
		cin >> a >> b;

		if (a + b > 24) {
			cout << "#" << test_case << " " << a + b - 24 << "\n";
		}
		else if (a + b == 24) {
			cout << "#" << test_case << " " << "0" << "\n";
		}
		else if (a + b < 24) {
			cout << "#" << test_case << " " << a + b << "\n";
		}

	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}