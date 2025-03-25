#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    int count = 0;
    int i = 0;
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < my_string.length(); j++) {
            if ('A' + i == my_string[j]) count++;
        }
        answer.push_back(count);
        count = 0;
    }
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < my_string.length(); j++) {
            if ('a' + i == my_string[j]) count++;
        }
        answer.push_back(count);
        count = 0;
    }
    return answer;
}