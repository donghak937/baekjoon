#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    if (s[0] >= 'a' && s[0] <= 'z') s[0] -= 32;
    for(int i =1; i < s.size(); i++){
        if (s[i] == ' ' && s[i+1] >= 'a' && s[i+1] <= 'z') s[i+1] -= 32;
        else if (s[i] >= 'A' && s[i] <= 'Z' && s[i-1] != ' ') s[i] += 32;
    }
    return s;
}