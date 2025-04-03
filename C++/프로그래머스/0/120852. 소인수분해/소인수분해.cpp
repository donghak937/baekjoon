#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    for(int i = 2; i <= n; i++){
        if (n % i == 0){
            n /= i;
            answer.push_back(i);
            i = 1;
        }
    }
    answer.erase(unique(answer.begin(), answer.end()), answer.end());
    return answer;
}