#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int index = str2.find(str1);
    if(index != string::npos) return 1;
    else return 0;
    
}