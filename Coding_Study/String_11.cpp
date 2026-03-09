#include <iostream>

using namespace std;

int main() {
	int dial[26] = 
	{ 2,2,2, 3,3,3, 4,4,4, 5,5,5, 
	6,6,6, 7,7,7,7,  8,8,8, 9,9,9,9 };
	string s;
	int n = 0;

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		n += dial[(s[i] - 'A')] + 1;
	}

	cout << n;

	return 0;
}