#include <iostream>

using namespace std;

int main() {
	int N;
	int arr[1000000];
	int min = 0, max = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < N; i++) {
		if (arr[i] > min) {
			arr[i] = max;
		}
		else {
			arr[i] = min;
		}
	}
	cout << min << " " << max;

	return 0;
}