#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    int count = 0;
    for(int i = 0; i <= myString.size() - pat.size(); i++){
        for(int j = 0; j < pat.size(); j++){
            if(myString[i+j] == pat[j]){
                count++;
            }
            if (count == pat.size()){
                answer++;
            }
        }
        count = 0;
    }
    return answer;
}