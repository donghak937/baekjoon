#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    string a = "";
    while (n != 0 && n != 1 && n != 2) {
        a += to_string(n % 3);
        n /= 3;
    }
    a += to_string(n % 3);

    for (int i = 0; i < a.size(); i++) {
        answer += ((a[i] - '0') * pow(3, a.size() -1-i));
    }
    return answer;
}