#include <iostream>

using namespace std;

int main() {
	int n[9] = {};
	int max = n[0], x = 0, maxCount;
	
	for (int i = 0; i < sizeof(n) / sizeof(n[0]); i++) {
		int _n[9];
		cin >> n[i];

		_n[i] = ++x;

		if (n[i] > max) {
			max = n[i];
			maxCount = _n[i];
		}
	}

	cout << max << "\n" << maxCount;

	return 0;
}

// 다른 풀이

//#include <iostream>
//using namespace std;
//int main() {
//	int n[9];
//	for (int i = 0; i < 9; i++) cin >> n[i];
//
//	int max = n[0], maxIdx = 1;
//	for (int i = 1; i < 9; i++) {
//		if (n[i] > max) {
//			max = n[i];
//			maxIdx = i + 1;  // 1-indexed
//		}
//	}
//	cout << max << "\n" << maxIdx;
//	return 0;
//}