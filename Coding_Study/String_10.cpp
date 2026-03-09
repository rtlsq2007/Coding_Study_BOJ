#include <iostream>
#include <string>

using namespace std;

int main() {
	string s[3];
	int n[2];
	int max;

	for (int i = 0; i < 2; i++) {
		char temp;
		cin >> s[i];

		temp = s[i][0];
		s[i][0] = s[i][2];
		s[i][2] = temp;

		n[i] = stoi(s[i]);
	}

	cout << ((n[0] > n[1]) ? n[0] : n[1]);

	return 0;
}