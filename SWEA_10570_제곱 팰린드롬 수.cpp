#include<iostream>

using namespace std;

bool num[1001];
int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (int n = 1; n <= 1000; n++) {

		int numb = n;
		int result = 0;

		while (n > 0) {
			int c = n % 10; 
			result = result * 10 + c; 
			n = n / 10; 
		}

		if (result == numb) {
			num[numb] = true;
		}
		n = numb;
	}

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int a, b;
		cin >> a >> b;
		int cnt = 0;
		for (int i = a; i <= b; i++) {
			int x = sqrt(i);
			if (x * x == i) {
				if (num[i] == 1 && num[x] == 1)
					cnt++;
			}
		}
		cout << "#" << test_case << " " << cnt << "\n";
		

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}