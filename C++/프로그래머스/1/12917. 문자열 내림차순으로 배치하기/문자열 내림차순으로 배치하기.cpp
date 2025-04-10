#include <string>
#include <vector>


using namespace std;

string solution(string s) {
    string answer = "";
    char temp;
    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < s.size(); j++){
            if (s[i] > s[j] && i != j){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;

            }
        }
    }
    return s;
}