#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    string num;
    for(int i = 0; i < intStrs.size(); i++){
        for(int j = s; j < s+l; j++){
            num += intStrs[i][j];
        }
        if (k < stoi(num)) answer.push_back(stoi(num));
        num = "";
    }
    return answer;
}