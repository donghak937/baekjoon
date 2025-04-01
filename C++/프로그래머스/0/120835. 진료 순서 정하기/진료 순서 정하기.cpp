#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer = emergency;
    vector<int> answers;
    sort(answer.begin(), answer.end(), greater<int>());
    int count = 0;

    while(count <= emergency.size()){
        for(int i = 0; i < emergency.size(); i++){
            if(emergency[count] == answer[i]) answers.push_back(i+1);
        }
        count++;
    }
    return answers;
}