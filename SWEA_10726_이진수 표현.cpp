#include<iostream>
#include <vector>
using namespace std;

vector <int> v;


void toBinary(int n) {
	while (n != 0) {
		if (n % 2 == 0)
			v.push_back(0);
		else
			v.push_back(1);
		n /= 2;
	}
}
int main(int argc, char** argv)
{
	int test_case;
	int T;
	int N, M;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		string answer = "ON";
		v.clear();
		cin >> N >> M;

		toBinary(M);

//		cout << "v.size: " << v.size() << "\n";
		

		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		}
		cout << "\n";
		if (v.size() < N) {
			cout << "#" << test_case << " " << "OFF" << "\n";
		}
		else if (v.size() >=  N) {
			for (int i = 0; i < N; i++) {
				if (v[i] == 0)
					answer = "OFF";
			}
			cout << "#" << test_case << " " << answer << "\n";

		}
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}