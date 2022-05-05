#include<iostream>
#include <vector>
#include <algorithm>
#define MIN -1001
using namespace std;

int test_case;
int T;
int n;

int main(int argc, char** argv)
{

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> n;

		vector <int> v(n);

		int answer = MIN; //-1001

		for (int i = 0; i < n; i++) {
			cin >> v[i];
			if (v[i] > answer)
				answer = v[i];
		}

		if (answer <= 0) {
			cout << "#" << test_case << ' ' << answer << '\n';
			continue;
		}

		int partialSum = 0; //부분합
		for (int i = 0; i < n; i++) {
			partialSum += v[i]; //33

			if (partialSum < 0)
				partialSum = 0; //0

			if (answer < partialSum)
				answer = partialSum; //15

		}

		cout << "#" << test_case << ' ' << answer << '\n';

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}