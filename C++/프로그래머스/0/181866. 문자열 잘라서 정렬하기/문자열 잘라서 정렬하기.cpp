#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string word = "";
    for(int i = 0; i < myString.size(); i++){
        if(myString[i] == 'x') continue;
        else if ((myString[i] != 'x' && (myString[i+1] == 'x') || i + 1 == myString.size())){
            word += myString[i];
            answer.push_back(word);
            word = "";
        }
        else word += myString[i];
    }
    sort(answer.begin(), answer.end());
    
    return answer;
}