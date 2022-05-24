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
		int a = n / 100;
		int b = n % 100;

		cout << a << " " << b << "\n";

		

		
		if (1 <= a && a <= 12 && 1 <= b && b <= 12) {
			cout << "#" << test_case << " " << "AMBIGUOUS" << "\n";
			continue;
		}
		else if ((((12 < a)&& (a<=99)) || (a==0)) && (((12 < b)&& (b<=99)) || (b == 0))) {
			cout << "#" << test_case << " " << "NA" << "\n";
			continue;
		}
		else if ((1 <= a && a <= 12) && ((12 < b) || (b == 0))) {
			cout << "#" << test_case << " " << "MMYY" << "\n";
			continue;
		}
		else if (((12 < a) || (a == 0)) && (1 <= b && b <= 12)) {
			cout << "#" << test_case << " " << "YYMM" << "\n";
			continue;
		}
		

	}

	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}