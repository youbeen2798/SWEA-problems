#include <iostream>
#include <string>
using namespace std;

string st;
int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> st;

		int k = st.size(); //5

		cout << "#" << test_case << " ";
		
		for (int i = k-1; i >= 0; i--) {

			if (st[i] == 'b') {
				cout << 'd';
			}
			else if (st[i] == 'd') {
				cout << 'b';
			}
			else if (st[i] == 'p') {
				cout << 'q';
			}
			else if (st[i] == 'q') {
				cout << 'p';
			}
		}

		cout << "\n";

	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}