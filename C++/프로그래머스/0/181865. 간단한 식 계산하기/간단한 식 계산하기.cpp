#include <string>
#include <vector>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    vector<string> words;
    string word;
    for (int i = 0; i < binomial.size(); i++) {
        if (binomial[i] != ' '){
            word += binomial[i]; 
            if (binomial[i+1] == ' ' || i+1 == binomial.size()){
                words.push_back(word);
                word = "";
            }
        
        } 
    }
    if (words[1] == "+") {
        answer = stoi(words[0]) + stoi(words[2]);
    }
    else if (words[1] == "-") {
        answer = stoi(words[0]) - stoi(words[2]);
    }
    else if (words[1] == "*") {
        answer = stoi(words[0]) * stoi(words[2]);
    }
    
    return answer;
}