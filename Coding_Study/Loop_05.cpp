#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int T = 0;
    int a[1000000];
    int b[1000000];

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> a[i] >> b[i];
    }

    for (int i = 0; i < T; i++) {
        cout << a[i] + b[i] << "\n";
    }

    return 0;
}