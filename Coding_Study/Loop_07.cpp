#include <iostream>

using namespace std;

int main() {
	int T;
	int a[1000], b[1000];

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> a[i] >> b[i];
	}

	for (int i = 0; i < T; i++) {
		cout << "Case #" << i + 1 << 
		": " << a[i] << " + " <<  b[i] 
			<< " = " << a[i] + b[i] << "\n";
	}

	return 0;
}