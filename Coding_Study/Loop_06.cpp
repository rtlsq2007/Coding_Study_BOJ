#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T = 0;
	int a, b;
	int result[1000];

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> a >> b;
		result[i] = a + b;
	}

	for (int i = 0; i < T; i++) {
		cout << "Case #" << i + 1 << ": " << result[i] << "\n";
	}

	return 0;
}