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

		if (a <= 9 && 1 <= a && b <= 9 && 1 <= b) {
			cout << "#" << test_case << ' ' << a * b << '\n';
			continue;
		}

		else {
			cout << "#" << test_case << ' ' << "-1" << "\n";
			continue;
		}

	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}