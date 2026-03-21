#include <iostream>
#include <string>

using namespace std;

int main() {
	//char c[9] = { 'c =', 'c -', 'dz =', 'd -',
	//	'lj', 'nj', 's =', 'z ='};

	int count = 0;
	string s;

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'd' && i + 1 < s.length()) {
			if (s[i + 1] == 'z') {
				i++;

				if (s[i + 1] == '=') {
					count++;
					i++;
					continue;
				}
				else {
					count += 2;
					continue;
				}
			}
			else if (s[i + 1] == '-') {
				count++;
				i++;
				continue;
			}
		}
		else if (s[i] == 'c' && i + 1 < s.length()) {
			if (s[i + 1] == '-') {
				count++;
				i++;
				continue;
			}
			else if (s[i + 1] == '=') {
				count++;
				i++;
				continue;
			}
		}
		else if (s[i] == 'l' && i + 1 < s.length()) {
			if (s[i + 1] == 'j') {
				count++;
				i++;
				continue;
			}
		}
		else if (s[i] == 'n' && i + 1 < s.length()) {
			if (s[i + 1] == 'j') {
				count++;
				i++;
				continue;
			}
		}
		else if (s[i] == 's' && i + 1 < s.length()) {
			if (s[i + 1] == '=') {
				count++;
				i++;
				continue;
			}
		}
		else if (s[i] == 'z' && i + 1 < s.length()) {
			if (s[i + 1] == '=') {
				count++;
				i++;
				continue;
			}
		}

		count++;
	}



	std::cout << count << "\n";

	return 0;
}