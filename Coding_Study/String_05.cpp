#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int n, result = 0;
	int	x[100];
	string s;

	cin >> n >> s;

	for (int i = 0; i < s.length(); i++) {
		x[i] = stoi(s.substr(i, 1));
		result += x[i];
	}

	cout << result;

	return 0;
}