#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = "";
    int i = 0;
    bool check = false;
    while (i != n_str.length()){
        if (check) answer += n_str[i];
        else if (n_str[i] != '0') {
            answer += n_str[i];
            check = true;
        }
        i++;
    }
    return answer;
}