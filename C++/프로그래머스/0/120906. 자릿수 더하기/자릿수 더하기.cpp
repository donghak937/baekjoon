#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    string num = to_string(n);
    int answer = 0;
    for(int i = 0; i < num.size(); i++){
        answer += num[i] - '0';
    }
    return answer;
}