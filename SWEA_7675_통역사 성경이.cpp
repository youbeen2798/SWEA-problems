#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <stdio.h>
using namespace std;

int test_case;
int T;

int main(int argc, char** argv)
{
	
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int n;
		cin >> n;


		vector <int> v;

		string s;


		while (n--) {

			int answer = 0;

			while (1) {

				cin >> s;

				if (isupper(s[0])) { //ù ���ڰ� �빮���̰�, ������ ���ڰ� �� �ҹ��ڶ��
					int cnt = 0;
					for (int i = 1; i < s.size(); i++) {
						if (islower(s[i])) {
							cnt++;
						}
					}

					if (s[s.size() - 1] == '!' || s[s.size() - 1] == '.' || s[s.size() - 1] == '?') {
						if (cnt == s.size() - 2) {
							answer++;
						}
					}
					else {
						if (cnt == s.size() - 1)
							answer++;
					}
				}

				if (s[s.size() - 1] == '!' || s[s.size() - 1] == '.' || s[s.size() - 1] == '?') {
					v.push_back(answer);
					break;
				}
			}			
		}

		cout << "#" << test_case << " ";

		
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		}
		cout << "\n";
		
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}