#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	int n = 0;

	cin >> s;

	//if (s.length() % 2) {
		for (int i = 0; i < s.length() / 2; i++) {
			if (s[i] == s[s.length() - (i + 1)]) {
				n = 1;
			}
			else {
				n = 0;
				cout << n;
				break;
			}
		}
	//}
	//else {
	//	for (int i = 0; i < s.length() / 2; i++) {
	//		if (s[i] == s[s.length() - (i + 1)]) {
	//			n = 1;
	//		}
	//		else {
	//			n = 0;
	//			cout << n;
	//			break;
	//		}
	//	}
	//}

	if (s.length() == 1) {
		cout << "1";
	}

	if (n == 1) {
		cout << n;
	}

	return 0;
}