#include <iostream>
#include <string>
using namespace std;

int count_x;
int T;
int test_case;

int main(int argc, char** argv)
{
	cin >> T;
	string input;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> input;
		count_x = 0;

		for (int i = 0; i < input.size(); i++) 
		{
			if (input[i] == 'x') 
				count_x++; 
			
		}

		if (count_x <= 7)
			cout << "#" << test_case << ' ' << "YES" << "\n";
		
		else 
			cout << "#" << test_case << ' ' << "NO" << "\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}