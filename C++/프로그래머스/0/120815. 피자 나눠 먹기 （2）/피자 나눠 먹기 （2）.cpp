#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int i = 1;
    do
        if (i * 6 % n == 0) break;
        else i++;
    while (1);
    return i;
}