#include <iostream>
#include <string>

using namespace std;

int main() {
	string result[21];
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int _n;
		string s;

		cin >> _n >> s;

		for (int j = 0; j < s.length(); j++) {
			for (int k = 0; k < _n; k++) {
				result[i] += s[j];
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << result[i] << "\n";
	}

	return 0;
}