#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    int total = 1;
    while (total <= n){
        total *= answer;
        answer++;
    }
    return answer -2;
}