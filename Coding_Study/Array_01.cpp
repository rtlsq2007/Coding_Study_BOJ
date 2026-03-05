#include <iostream>

using namespace std;

int main() {
	int N, v, n = 0;
	int arr[1000];

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	cin >> v;

	for (int i = 0; i < N; i++) {
		if (arr[i] == v) {
			n++;
		}
	}

	cout << n;

	return 0;
}