#include <iostream>

using namespace std;

int main() {
	int N;
	int j;
	int k;
	int p = 1;

	cin >> N;
	for (int i = 0; i < N; i++) {
		for (j = 1; j <= N - p; j++) {
			cout << " ";
		}

		p++;

		for (k = 1; k < p; k++) {
			cout << "*";
		}
		cout << "\n";
	}


	return 0;
}