#include<iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

vector <int> v;
vector <int> vt;
int test_case;
int T;
int k;

void function(int array[], int element) { //7

	int medium = (element - 1) / 2; //3
	cout << array[medium] << "\n";
	v.push_back(medium);

	k -= 2;
	while (k--) {
		for (int i = 0; i < v.size(); i++) {
			if (v.size() == 1) {
				medium = (v[i] - 1) / 2;
				cout << array[medium] << " "; //2
				vt.push_back(medium);

				medium = (v[i] + element) / 2;
				cout << array[medium] << " ";
				vt.push_back(medium);
			}
			else {
				if (i == 0) {
					medium = (v[i] - 1) / 2;
					cout << array[medium] << " ";
					vt.push_back(medium);
				}
				if (i != (v.size() - 1)) {
					medium = (v[i] + v[i + 1]) / 2;
					cout << array[medium] << " ";
					vt.push_back(medium);
				}
				if (i == (v.size() - 1)) {
					medium = (v[i] + element + 1) / 2;
					cout << array[medium] << " ";
					vt.push_back(medium);
				}
			}

		}
		cout << "\n";
		for (int i = 0; i < vt.size(); i++) {
			v.push_back(vt[i]);
		}
		vt.clear();
		sort(v.begin(), v.end());
	}

}
int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		v.clear();
		cin >> k;

		int element = pow(2, k) - 1;

		int* array = new int[element];

		for (int i = 0; i < element; i++) {
			cin >> array[i]; //0부터 6까지
		}


		cout << "#" << test_case << " ";

		function(array, element);

		for (int i = 0; i <= element; i += 2) {
			cout << array[i] << " ";
		}
		cout << "\n";

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}