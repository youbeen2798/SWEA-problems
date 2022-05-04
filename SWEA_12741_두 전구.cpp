#include<iostream>
#include <string>
using namespace std;

int a, b, c, d;
int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int array[101] = { 0, };
		int cnt = 0;

		cin >> a >> b >> c >> d;

		for (int i = a; i <= b; i++)
			array[i]++;
		for (int i = c; i <= d; i++)
			array[i]++;
		for (int i = 0; i <= 100; i++)
			if (array[i] >= 2)
				cnt++;

		if (cnt == 0)
			cout << "#" << test_case << ' ' << "0" << "\n";
		else
			cout << "#" << test_case << ' ' << cnt - 1 << "\n";


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}