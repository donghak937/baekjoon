#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int p = 0;
    string name;
    double a;
    string grade;
    double total = 0;
    double atotal = 0;
    for (int i = 0; i < 20; i++) {

        cin >> name >> a >> grade;
        if (grade == "A+") {
            total += a * 4.5;
            atotal += a;
        }
        else if (grade == "A0") {
            total += a * 4.0;
            atotal += a;
        }
        else if (grade == "B+") {
            total += a * 3.5;
            atotal += a;
        }
        else if (grade == "B0") {
            total += a * 3.0;
            atotal += a;
        }
        else if (grade == "C+") {
            total += a * 2.5;
            atotal += a;
        }
        else if (grade == "C0") {
            total += a * 2.0;
            atotal += a;
        }
        else if (grade == "D+") {
            total += a * 1.5;
            atotal += a;
        }
        else if (grade == "D0") {
            total += a * 1.0;
            atotal += a;
        }
        else if (grade == "P") {
            p++;
        }
        else atotal += a;
    }

    total = total / atotal;
    cout.precision(7);
    cout << total;
}