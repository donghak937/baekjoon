#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    vector<string> a;
    int num = 0;
    string temp = "";
    for (int i = 0; i < quiz.size(); i++) {
        for (int j = 0; j < quiz[i].size(); j++) {
            if (j == quiz[i].size() - 1) {
                temp += quiz[i][j];
                a.push_back(temp);
                temp = "";
            }

            else if (quiz[i][j] == ' ') {
                a.push_back(temp);
                temp = "";
            }

            else temp += quiz[i][j];
        }
        if (a[1] == "+") {
            num = stoi(a[0]) + stoi(a[2]);
        }
        else if (a[1] == "-") {
            num = stoi(a[0]) - stoi(a[2]);
        }

        if (stoi(a[4]) == num) answer.push_back("O");
        else answer.push_back("X");
        num = 0;
        a.clear();
    }
    return answer;
}