#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string target) {
    int index = my_string.find(target);
    if(index != string::npos) return 1;
    else return 0;
}