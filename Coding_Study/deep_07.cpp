#include <iostream>
#include <string>
using namespace std;

bool isGroupWord(const string& word) {
    bool visited[26] = {};
    char prev = '\0';

    for (char c : word) {
        if (c != prev) {
            if (visited[c - 'a']) {
                return false;
            }
            visited[c - 'a'] = true;
            prev = c;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    int count = 0;
    while (n--) {
        string word;
        cin >> word;
        if (isGroupWord(word)) count++;
    }

    cout << count << '\n';
    return 0;
}