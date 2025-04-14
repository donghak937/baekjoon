#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    int count = 0;
    
    for(int i = 0; i < s.size(); i++){
        if (count == 0 && s[i] == ')' ) return false;
        else if (s[i] == '(') count++;
        else if (s[i] == ')') count--;
    }
    if (count != 0) return false;

    return true;
}