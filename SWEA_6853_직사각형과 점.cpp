#include<iostream>

using namespace std;

int test_case;
int T;
int n;
int main(int argc, char** argv)
{
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int X1, X2, Y1, Y2;
		int ans1 = 0;
		int ans3 = 0;

		cin >> X1 >> Y1 >> X2 >> Y2;

		cin >> n;

		for (int i = 0; i < n; i++) {
			int x, y;
			cin >> x >> y;

			if (X1 < x && x < X2 && Y1 < y && y < Y2) {
				ans1++;
			}
			if (x < X1 || X2 < x || y < Y1 || Y2 < y) {
				ans3++;
			}
		}

		cout << "#" << test_case << " " << ans1 << " " << n - ans1 - ans3 << " " << ans3 << "\n";


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
