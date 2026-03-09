#include <iostream>

using namespace std;

int main() {
	string s;
	int n[26] = {};

	for (int i = 0; i < 26; i++) {
		n[i] = -1;
	}

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		int c = 0;
		int a = 97;
			
		for (int j = 0; j < 26; j++) {
			if (s[i] == a && n[j] == -1) {
				n[j] = i;
			}
			
			c++;
			a++;
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << n[i] << " ";
	}

	return 0;
}