#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int n;
    if (num % 2 == 1){
        n = total / num;
        for(int i = 1; i <= num /2 ; i++){
            answer.push_back(n-i);
        }
        answer.push_back(n);
        for(int i = 1; i <= num /2; i++){
            answer.push_back(n+i);
        }
    }
    else{
        n = total / num;
        for(int i = 1; i < num /2 ; i++){
            answer.push_back(n-i);
        }
        answer.push_back(n);
        for(int i = 1; i <= num /2; i++){
            answer.push_back(n+i);
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}