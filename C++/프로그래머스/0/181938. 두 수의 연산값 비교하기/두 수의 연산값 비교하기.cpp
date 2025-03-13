#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    string str = to_string(a) + to_string(b);
    if (stoi(str) > 2 * a * b) return stoi(str);
    else return 2 * a * b;
    int answer = 0;
    return answer;
}