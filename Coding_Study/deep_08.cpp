#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double totalCredit = 0, totalScore = 0;

    for (int i = 0; i < 20; i++) {
        string name, g;
        double credit;
        cin >> name >> credit >> g;

        if (g == "P") continue;

        double score = 0;
        if (g == "A+") score = 4.5;
        else if (g == "A0") score = 4.0;
        else if (g == "B+") score = 3.5;
        else if (g == "B0") score = 3.0;
        else if (g == "C+") score = 2.5;
        else if (g == "C0") score = 2.0;
        else if (g == "D+") score = 1.5;
        else if (g == "D0") score = 1.0;
        else if (g == "F") score = 0.0;

        totalCredit += credit;
        totalScore += credit * score;
    }

    cout << fixed;
    cout.precision(6);
    cout << totalScore / totalCredit << '\n';
    return 0;
}