#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    string str = "";
    int count = 0, zeroCount = 0;
    int num;
    while (s.size() != 1) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') str += s[i]; 
            else zeroCount++;
        }
        count++;
        num = str.size();
        str = "";

        while (num != 0) {
            if (num % 2 == 0) str += '0';
            else str += '1';
            num /= 2;
        }
        s = str;
        str = "";
    }
    answer.push_back(count);
    answer.push_back(zeroCount);
    return answer;
}