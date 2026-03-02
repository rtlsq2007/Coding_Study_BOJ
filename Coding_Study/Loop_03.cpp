#include <iostream>

using namespace std;

int main() {
	int total = 0, count = 0;
	int a = 0, b = 0, sum = 0;

	cin >> total >> count;

	for (int i = 0; i < count; i++) {
		cin >> a >> b;
		sum += a * b;
	}


	if (sum == total) {
		cout << "Yes" << endl;
	}
	else {
		cout << "N" << endl;
	}

	return 0;
}