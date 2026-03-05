#include <iostream>

using namespace std;

int main() {
	int n, m;
	int basket[100] = {};

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int _i, _j, _k;
		cin >> _i >> _j >> _k;

		for (int j = _i; j <= _j; j++) {
			basket[j] = _k;
		}
	}

	for (int i = 1; i <= n; i++) {
		cout << basket[i] << " ";
	}

	return 0;
}