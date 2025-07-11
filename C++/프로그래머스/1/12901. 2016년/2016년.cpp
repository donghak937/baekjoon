#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    vector<string> c = {"FRI","SAT","SUN","MON","TUE","WED","THU"};
    int daysInMonth[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int total = 0;
    int n;
    for (int i = 0; i < a - 1; i++) {
        total += daysInMonth[i];
    }
    total += b;
    n = (total % 7)  - 1;
    if (total % 7 == 0){
        n = 6;
    }
    

    return c[n];
}