#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    vector<int> v1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i) v1.push_back(1);
            else v1.push_back(0);
        }
        answer.push_back(v1);
        v1.clear();
    }
    return answer;
}