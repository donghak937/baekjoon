#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    int counter = 0;
    vector<int> answer;
    for(int i = 0; i < myString.size(); i++){
        if (myString[i] == 'x') {
            answer.push_back(counter);
            counter = 0;
        }
        else counter++;
    }
    answer.push_back(counter);
    return answer;
}