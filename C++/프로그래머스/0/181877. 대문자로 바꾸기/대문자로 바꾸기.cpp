#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(int i = 0; i < myString.size(); i++){
        if (myString[i] <= 'z' && myString[i] >= 'a') myString[i] -= 32;
    }
    
    return myString;
}