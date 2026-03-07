#include <iostream>

using namespace std;

int main() {
    bool n[31] = {};

    for (int i = 0; i < 28; i++) {
        int x;
        cin >> x;
        n[x] = true;
    }

    for (int i = 1; i <= 30; i++) {
        if (n[i] == false) {
            cout << i << "\n";
        }
    }

	return 0;
}