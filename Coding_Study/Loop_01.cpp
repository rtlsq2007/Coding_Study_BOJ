#include <iostream>

using namespace std;

int main() {
	int a[1000] = { 0 };
	int	b[1000] = { 0 };
	int	T = 0;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> a[i] >> b[i];
	}

	for (int i = 0; i < T; i++) {
		cout << a[i] + b[i] << endl;
	}

	return 0;
}