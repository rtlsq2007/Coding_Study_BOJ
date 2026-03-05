#include <iostream>

using namespace std;

int main() {
	int a, b, i = 0;
	int result[1000];

	while (1) {
		cin >> a >> b;
		
		if (a == 0 && b == 0) {
			break;
		}

		result[i] = a + b;
		i++;
	}

	for (int j = 0; j < i; j++) {
		cout << result[j] << "\n";
	}

	return 0;
}