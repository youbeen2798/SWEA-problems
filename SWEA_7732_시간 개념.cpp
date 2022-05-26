#include<iostream>

using namespace std;

int h1, m1, s1;
int h2, m2, s2;
int test_case;
int T;
int ah, am, as;
char t;

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{


		cin >> h1 >> t >> m1 >> t >> s1;
		cin >> h2 >> t >> m2 >> t >> s2;

		//약속시간이 더 늦을 때
		if ((h1 < h2) || ((h1 == h2) && (m1 < m2)) || ((h1 == h2) && (m1 == m2) && (s1 == s2))) {
			if (s1 <= s2) {
				as = s2 - s1;
			}
			else {
				as = 60 + s2 - s1;
				m2--;
			}
			if (m2 >= m1) {
				am = m2 - m1;
			}
			else {
				am = 60 + m2 - m1;
				h2--;
			}
			if (h2 >= h1) {
				ah = h2 - h1;
			}
		}
		else {

			int temp1 = s1;
			int temp2 = h1;
			int temp3 = m1;

			s1 = s2;
			m1 = m2;
			h1 = h2;

			s2 = temp1;
			h2 = temp2;
			m2 = temp3;

			if (s1 <= s2) {
				as = s2 - s1;
			}
			else {
				as = 60 + s2 - s1;
				m2--;
			}
			if (m2 >= m1) {
				am = m2 - m1;
			}
			else {
				am = 60 + m2 - m1;
				h2--;
			}
			if (h2 >= h1) {
				ah = h2 - h1;
			}

			int a = 24;
			int b = 0;
			int c = 0;

			if (as != 0) {
				as = 60 - as; //51
				am = 59 - am;
				ah = 23 - ah;
			}

			else {
				if (am == 0) {
					ah = 24 - ah;
				}
				else if (am != 0) {
					am = 60 - am;
					ah--;
				}
			}
		}


		if ((ah <= 9) && (am <= 9) && (as <= 9)) {
			cout << "#" << test_case << " " << "0" << ah << ":" << "0" << am << ":" << "0" << as << "\n";
		}
		else if ((ah <= 9) && (am <= 9) && (10 <= as)) {
			cout << "#" << test_case << " " << "0" << ah << ":" << "0" << am << ":" << as << "\n";

		}
		else if ((ah <= 9) && (10 <= am) && (as <= 9)) {
			cout << "#" << test_case << " " << "0" << ah << ":" << am << ":" << "0" << as << "\n";

		}
		else if ((ah <= 9) && (10 <= am) && (10 <= as)) {
			cout << "#" << test_case << " " << "0" << ah << ":" << am << ":" << as << "\n";

		}

		else if ((10 <= ah) && (am <= 9) && (as <= 9)) {
			cout << "#" << test_case << " " << ah << ":" << "0" << am << ":" << "0" << as << "\n";
		}
		else if ((10 <= ah) && (am <= 9) && (10 <= as)) {
			cout << "#" << test_case << " " << ah << ":" << "0" << am << ":" << as << "\n";

		}
		else if ((10 <= ah) && (10 <= am) && (as <= 9)) {
			cout << "#" << test_case << " " << ah << ":" << am << ":" << "0" << as << "\n";

		}
		else if ((10 <= ah) && (10 <= am) && (10 <= as)) {
			cout << "#" << test_case << " " << ah << ":" << am << ":" << as << "\n";

		}


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}