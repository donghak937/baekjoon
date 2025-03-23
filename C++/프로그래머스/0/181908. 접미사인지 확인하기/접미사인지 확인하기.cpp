#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    string word;
    for(int i = 0; i < my_string.length(); i++){
        for(int j = i; j < my_string.length(); j++){
            word += my_string[j];
        }
        if (word == is_suffix) return 1;
        word = "";
    }
    return 0;
}