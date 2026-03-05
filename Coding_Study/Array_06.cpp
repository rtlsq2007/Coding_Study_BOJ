#include <iostream>

using namespace std;

int main() {
	int n, m;
	int basket[101];

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		basket[i + 1] = i + 1;
	}

	for (int i = 0; i < m; i++) {
		int _i, _j, temp;
		cin >> _i >> _j;

		temp = basket[_i];
		basket[_i] = basket[_j];
		basket[_j] = temp;
	}

	for (int i = 0; i < n; i++) {
		cout << basket[i + 1] << " ";
	}

	return 0;
}