#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    int count = 0;
    sort(s.begin(), s.end());
    for(int i = 0; i < s.size(); i++){
        if (s[i] == s[i+1]){
            count++;
        }
        else if (s[i] != s[i+1] && count == 0){
            answer += s[i];
        }
        else if (s[i] != s[i+1] && count != 0){
            count = 0;
        }
    }
    return answer;
}