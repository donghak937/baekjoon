#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int max = -100000000;
    int min = 100000000;
    string temp = "";
    for(int i = 0; i <= s.size(); i++){
        if (i == s.size() || s[i] == ' ' ){
            if (stoi(temp) > max){
                max = stoi(temp);
            }
            if (stoi(temp) < min){
                min = stoi(temp);
            }
            temp = "";
        }
        else temp += s[i];
    }
    answer += to_string(min) + " " + to_string(max);
    
    return answer;
}