#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	string result[101];

	cin >> t;

	for (int i = 0; i < t; i++) {
		string s;
		cin >> s;
		
		if (s.length() == 1) {
			result[i] = s + s;
		}
		else {
			result[i] = s.erase(1, s.length() - 2);
		}
	}

	for (int i = 0; i < t; i++) {
		cout << result[i] << "\n";
	}

	return 0;
}