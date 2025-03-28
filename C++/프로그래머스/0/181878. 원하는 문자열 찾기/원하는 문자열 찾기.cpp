#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    for(int i = 0; i < myString.size(); i++){
        if (myString[i] < 'a') myString[i] += 32; 
    }
    for(int i = 0; i < pat.size(); i++){
        if (pat[i] < 'a') pat[i] += 32; 
    }
    if (myString.find(pat) != std::string::npos) return 1;
    return 0;
}