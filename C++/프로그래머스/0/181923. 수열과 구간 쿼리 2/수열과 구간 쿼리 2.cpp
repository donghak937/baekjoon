#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    int min = 1000000;
    int count = 0;
    for (int i = 0; i < queries.size(); i++) {
        for (int j = queries[i][0]; j <= queries[i][1]; j++) {
            if (arr[j] > queries[i][2]) {
                count = 1;
                if (arr[j] < min) {
                    min = arr[j];
                }
            }
        }
        if (count == 0) answer.push_back(-1);
        else answer.push_back(min);
        count = 0;
        min = 1000000;
    }

    return answer;
}