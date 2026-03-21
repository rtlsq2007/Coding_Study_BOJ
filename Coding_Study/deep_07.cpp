#include <iostream>

using namespace std;

int main() {
	int n;
	string s;
	bool b;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> s;

		for (int j = 0; j < s.length(); j++) {
			for (int k = 0; k < s.length(); k++) {
				if (s[j] == s[k]) {
					b = true;
				}
			}
		}
	}

	return 0;
}