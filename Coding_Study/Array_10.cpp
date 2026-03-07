#include <iostream>

using namespace std;

int main() {
	int n;
	int score[1000] = {};
	int max = 0;
	double sum = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> score[i];

		if (max < score[i]) {
			max = score[i];
		}
	}

	for (int i = 0; i < n; i++) {
		sum += (double)score[i] / max * 100;
	}

	cout << sum / (double)n;

	return 0;
}