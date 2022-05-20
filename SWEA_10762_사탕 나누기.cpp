#include<iostream>
#include <algorithm>
#include <vector>

using namespace std;

int test_case;

int input[1000];

int result = 0;
int sum = 0;
int T;
int n;
int k;

int main(int argc, char** argv)
{
	
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		result = 0;
		sum = 0;

		cin >> n;
		
		for (int i = 0; i < n; i++) {
			cin >> input[i];
			result ^= input[i];
			sum += input[i];
		}

		if (result == 0) {
			sort(input, input + n);
			cout << "#" << test_case << " " << sum - input[0]<< "\n";
		}
		else{
			cout << "#" << test_case << " " << "NO" << "\n";
		}
		

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
