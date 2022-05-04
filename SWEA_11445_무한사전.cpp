#include<iostream>
#include <string>
using namespace std;

string P;
string Q;
string input;
int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> P;
		cin >> Q;

		string st = P + 'a';

//		cout << "Q: " << Q << "\n";
//		cout << "st: " << st << "\n";
		
		if(st == Q)
			cout << "#" << test_case << ' ' << 'N' << "\n";
		else
			cout << "#" << test_case << ' ' << 'Y' << "\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}