#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> a = { "aya", "ye", "woo", "ma" };
    for (int i = 0; i < babbling.size(); i++) {
        for (int j = 0; j < 4; j++) {
            if (babbling[i].find(a[j]) == string::npos) {
                continue;
            }
            else {
                babbling[i].replace(babbling[i].find(a[j]), a[j].size(), " ");
                j--;
            }
        }
    }
    for (int i = 0; i < babbling.size(); i++) {
        babbling[i].erase(remove(babbling[i].begin(), babbling[i].end(), ' '), babbling[i].end());
    }
    for (int i = 0; i < babbling.size(); i++) {
        if (babbling[i] == "") answer++;
    }
    return answer;
}