#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    string temp="";
    int count = 0;
    for(int i = 0; i < my_str.size(); i++){
        if (count != n){
            temp += my_str[i];
            count++;
        }
        else{
            answer.push_back(temp);
            temp = "";
            temp += my_str[i];
            count = 1;
        }
        
    }
    if (temp.size() != 0){
        answer.push_back(temp);
    }
    return answer;
}