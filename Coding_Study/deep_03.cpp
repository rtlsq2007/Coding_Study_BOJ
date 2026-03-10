#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	for (int i = 1; i <= n*2-1; i++) {
		if (i <= n) {
			for (int j = 1; j <= n - i; j++) {
				cout << " ";
			}

			for (int k = 1; k <= i * 2 - 1; k++) {
				cout << "*";
			}
		}
		else {
			for (int j = 1; j <= i - n; j++) {
				cout << " ";
			}

			for (int k = 1; k <= (n * 2 - i) * 2 - 1; k++) {
				cout << "*";
			}
		}

		cout << "\n";
	}

	//int n;
	//cin >> n;
	//int star = 1;

	//for (int i = 1; i <= n; i++) {
	//	for (int j = 0; j < n - i; j++) {
	//		cout << " ";
	//	}

	//	for (int j = 0; j < star; j++) {
	//		cout << "*";
	//	}

	//	cout << "\n";
	//	star += 2;
	//}

	//star -= 4;

	//for (int i = n - 1; i >= 1; i--) {
	//	for (int j = 0; j < n - i; j++) {
	//		cout << " ";
	//	}

	//	for (int j = 0; j < star; j++) {
	//		cout << "*";
	//	}

	//	cout << "\n";
	//	star -= 2;
	//}

		return 0;
}