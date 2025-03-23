#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string word;
    for(int i = 0; i < my_string.length(); i++){
        for(int j = i; j < my_string.length(); j++){
            word += my_string[j];
        }
        answer.push_back(word);
        word = "";
    }
    sort(answer.begin(), answer.end());
    return answer;
}