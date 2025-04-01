#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string letter) {
    vector<string > morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    istringstream ss (letter);
    string answer = "";
    string subs1;
    while(getline(ss,subs1,' ')){
        for (int i = 0; i < morse.size(); i++){
            if (morse[i] == subs1) answer += i + 49 + '0';
        }
    }
    
    return answer;
}