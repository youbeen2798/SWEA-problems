#include<iostream>
#include <queue>
using namespace std;

int test_case;
int T;
int k;
int hi;
int minuss;
int main(int argc, char** argv)
{
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		
		vector <int> v;

		for (int i = 0; i < 8; i++) {
			cin >> k;
			v.push_back(k);
		}

		int mini = v[0];

		for (int i = 0; i < 8; i++) {
			if (mini >= v[i]) {
				mini = v[i];
			}
		}

		cout << "mini: " << mini << "\n";

		if (mini % 15 == 0) {
			int k = mini / 15;
			cout << "나눠짐" << "\n";
			cout << "k: " << k << "\n";
			minuss = (k - 1) * 15;
		}
		else {
			int k = mini / 15;
			cout << "안나눠짐" << "\n";
			cout << "k: " << k << "\n";
			minuss = k * 15;
		}

		cout << "minus: " << minuss << "\n";

		for (int i = 0; i < 8; i++) {
			v[i] -= minuss;
		}

		queue <int> q;

		for (int i = 0; i < 8; i++) {
			q.push(v[i]);
		}
		
		hi = 1;
		while (1) {
			for (int i = 1; i <= 5; i++) {
				int a = q.front();

				if ((a - i) <= 0) {
					q.pop();
					q.push(0);
					hi = 0;
					cout << "hi는" << 0 << "\n";
					break;
				}

				else {
					cout << "사라지는 원소: " << a << "\n";
					q.pop();
					cout << "뒤에 붙는 원소: " << a - i << "\n";
					q.push(a - i);
					cout << "큐 사이즈: " << q.size() << "\n";
				}

			}
			if (hi == 0) {
				break;
			}
		}

		cout << "q.size: " << q.size() << "\n";
		
		while (!q.empty()) {
			cout << q.front() << " ";
			q.pop();
		}
		
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}