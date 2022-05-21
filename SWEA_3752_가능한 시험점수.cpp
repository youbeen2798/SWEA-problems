#include <iostream>
#include <vector>

using namespace std;

int score[100];
bool visited[10001];

vector <int> canScore;

int main() {
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; test_case++) {

		memset(score, 0, sizeof(score) * sizeof(int));
		memset(visited, false, sizeof(visited) * sizeof(bool));

		int n;
		cin >> n;

		for (int i = 0; i < n; i++) {
			cin >> score[i];
		}

		canScore.push_back(0);
		visited[0] = true;

		for (int i = 0; i < n; i++) {
			int v_size = canScore.size();

			for (int j = 0; j < v_size; j++) {
				int newScore = canScore[j] + score[i];

				if (visited[newScore] == false) {
					canScore.push_back(newScore);
					visited[newScore] = true;
				}
			}
		}

		int answer = canScore.size();

		cout << "#" << test_case << " " << answer << "\n";

	}
}