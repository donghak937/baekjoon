#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = n*12000 + k*2000;
    answer -= (n/10) * 2000;
    return answer;
}