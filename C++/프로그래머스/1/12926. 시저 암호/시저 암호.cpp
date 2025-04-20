#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    int a;
    for(int i = 0; i < s.size(); i++){
        if (s[i] == ' ') continue;
        
        if (s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += n;
            if (s[i] > 'Z') s[i] -= 26;
        }
        else{
            if (n > 5){
                a = 26 - n;
                s[i] -= a;
                if (s[i] < 'a') s[i] += 26;
            }
            else{
                s[i] += n; 
                if (s[i] > 'z') s[i] -= 26;
            }
        }
    }
    return s;
}