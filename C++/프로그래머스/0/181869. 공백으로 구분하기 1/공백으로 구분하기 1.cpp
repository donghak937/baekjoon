#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string word("");
    for(int i = 0; i < my_string.size(); i++){
        if (my_string[i] == ' ') continue;
        else if (my_string[i] != ' ') {
            word += my_string[i];
            if(my_string[i+1] == ' ' || i+1 == my_string.size()){
                answer.push_back(word);
                word = "";
            }
        }
    }
    return answer;
}