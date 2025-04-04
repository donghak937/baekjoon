#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    bool isSame = false;
    for(int i = 0; i < my_string.size(); i++){
        for(int j = 0; j < answer.size(); j++){
            if (my_string[i] == answer[j]) isSame = true;
        }
        if (!isSame) answer += my_string[i];
        isSame = false;
    }
    return answer;
}