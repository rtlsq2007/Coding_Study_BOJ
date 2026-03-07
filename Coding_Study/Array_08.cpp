#include <iostream>

using namespace std;

int main() {
	int n[10] = {};
	int count = 0;

	for (int i = 0; i < 10; i++) {
		bool same = false;
		int x;

		cin >> x;
		n[i] = x % 42;

		for (int j = 0; j < i; j++) {

			if (n[i] == n[j]) {
				same = true;
			}
		}

		if (!same) {
			count++;
		}
	}

	cout << count;

	return 0;
}