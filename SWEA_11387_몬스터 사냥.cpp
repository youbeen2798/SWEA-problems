#include<iostream>

using namespace std;

int test_case;
int T;
int D, L, N;
int sum;
int main(int argc, char** argv)
{


	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> D >> L >> N;


		long long k = D * (N - 1) * N;
		long long m = k * L;

		double x = double(m) / 200;

		cout << "#" << test_case << " " << fixed << int(D * N + x) << "\n";

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}