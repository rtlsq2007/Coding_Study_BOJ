#include <iostream>

using namespace std;

int main() {
	int n, m;
	int basket[101] = {};

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		basket[i] = i;
	}

	for (int i = 1; i <= m; i++) {
		int _i, _j, temp;

		cin >> _i >> _j;

		for (int j = 0; _i < _j; j++) {
			temp = basket[_i];
			basket[_i] = basket[_j];
			basket[_j] = temp;
			_i++;
			_j--;
		}
	}

	for (int i = 1; i <= n; i++) {
		cout << basket[i] << " ";
	}

	return 0;
}