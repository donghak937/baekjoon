#include <string>
#include <vector>
#include <cctype>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string temp = "";
    for(int i = 0; i < my_string.size(); i++){
        if (isdigit(my_string[i]) != 0){
            temp += my_string[i];
        }
        else if (isdigit(my_string[i]) == 0 && temp.size() != 0){
            answer += stoi(temp);
            temp = "";
        }
    }
    if (temp.size() != 0){
        answer += stoi(temp);
    }
    return answer;
}