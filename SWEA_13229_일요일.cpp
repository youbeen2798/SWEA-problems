#include<iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;

	string st;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> st;

		if (st == "MON")
			cout << "#" << test_case << ' ' << 6 << "\n";

		else if (st == "TUE")
			cout << "#" << test_case << ' ' << 5 << "\n";

		else if (st == "WED")
			cout << "#" << test_case << ' ' << 4 << "\n";

		else if (st == "THU")
			cout << "#" << test_case << ' ' << 3 << "\n";

		else if (st == "FRI")
			cout << "#" << test_case << ' ' << 2 << "\n";

		else if (st == "SAT")
			cout << "#" << test_case << ' ' << 1 << "\n";

		else if (st == "SUN")
			cout << "#" << test_case << ' ' << 7 << "\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}