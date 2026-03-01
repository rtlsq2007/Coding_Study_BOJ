#include <iostream>

using namespace std;

int main() {
	int x = 0, n = 0;

	cin >> n;
	x = n / 4;

	for (int i = 0; i < x; i++) {
		cout << "long ";
	}
	cout << "int" << endl;

	return 0;
}