#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    bool isSame = false;
    while (answer.size() != k) {
        if (answer.size() == 0) {
            for (int i = 0; i < arr.size(); i++) {
                for (int j = 0; j < answer.size(); j++) {
                    if (arr[i] == answer[j]) {
                        isSame = true;
                        break;
                    }
                }
                if (isSame == false) answer.push_back(arr[i]);
                isSame = false;
                if (answer.size() == k) break;
            }
        }
        else if (answer.size() != k) {
            answer.push_back(-1);
        }
    }
    return answer;
}