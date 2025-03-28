#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    int count = 1;
    string temp("");
    sort(strArr.begin(), strArr.end(), [](string &a, string &b) { return a.length() < b.length();});
    int index = strArr[0].size();

    for (int i = 1; i < strArr.size(); i++) {
        if (strArr[i].size() == index) count++;
        else {
            if (count > answer) {
                answer = count;
            }
            index = strArr[i].size();
            count = 1;
        }
    }
    if (count > answer) answer = count;
    return answer;
}