#include <iostream>

using namespace std;

int main() {
	string s;
	int count = 0, max = 0;
	int n[1000001] = {};
	bool same = false;

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			s[i] = s[i] - 32;
		}
	}
	

	for (int i = 0; i < s.length(); i++) {
		same = false;

		for (int j = 0; j < i; j++) {
			if (s[j] == s[i]) {
				same = true;
				break;
			}
			else {
				same = false;
			}
		}

		if (!same) {
			for (int j = 0; j < s.length(); j++) {
				if (s[j] == s[i]) n[i]++;
			}
		}

		if (n[i] > max) {
			max = n[i];
		}
	}


	for (int i = 0; i < s.length(); i++) {
		if (n[i] == max) {
			count++;
		}
	}

	if (count >= 2) {
		cout << "?";
	}
	else {
		for (int i = 0; i < s.length(); i++) {
			if (n[i] == max) {
				cout << s[i];
				break;
			}
		}
	}

	return 0;
}