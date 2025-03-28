#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    int count = 0;
    int index;
    for(int i = 0; i <= myString.size() - pat.size(); i++){
        for(int j = 0; j < pat.size(); j++){
            if(myString[i+j] == pat[j]){
                count++;
            }
            if (count == pat.size()){
                index = i+j;
            }
        }
        count = 0;
    }
    for(int i = 0; i <= index; i++){
        answer += myString[i];
    }
    return answer;
}