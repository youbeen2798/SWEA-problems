#include<iostream>
#include <string>
#include <vector>
#include<algorithm>

using namespace std;

int T;
int test_case;
vector <int> v;
vector <int> vt;
string a;
int main(int argc, char** argv)
{
	cin >> T;

	for (test_case = 1; test_case <= T; test_case++) {

		string answer = "impossible";

		cin >> a;

		int c = stoi(a);

		for (int i = 2; i <= 10; i++) {
			int d = c * i;
			v.push_back(d);
		}

		sort(a.begin(), a.end());

		do {
			int b = stoi(a);
			vt.push_back(b);
		} while (next_permutation(a.begin(), a.end()));


		for (int i = 0; i < v.size(); i++) {
			for (int j = 0; j < vt.size(); j++) {
				if (v[i] == vt[j]) {
					answer = "possible";
				}
			}
		}
		cout << "#" << test_case << " " << answer << "\n";

		v.clear();
		vt.clear();
	}

}


