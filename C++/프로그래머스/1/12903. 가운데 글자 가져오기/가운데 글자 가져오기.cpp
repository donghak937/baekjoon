#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    if(s.size() % 2 == 1){
        int size = s.size()/ 2;
        answer += s[size];
    }
    else{
        int size = s.size()/2 - 1;
        answer += s[size];
        answer += s[size+1];
    }
    
    return answer;
}