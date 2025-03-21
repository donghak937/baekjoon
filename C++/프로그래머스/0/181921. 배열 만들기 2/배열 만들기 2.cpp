#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    string isFive(to_string(l));
    int size = 1;
    vector<int> answer;
    vector<int> five;

    for (int i = 5; i <= r; i *= 10) {
        answer.push_back(i);
        size = answer.size(); // 1
        for (int j = 0; j < size - 1; j++) {
            answer.push_back(answer[size - 1] + answer[0 + j]);
        }
    }
    size = answer.size();
    for (int i = 0; i < size; ++i) {
        if (answer[i] >= l && answer[i] <= r) five.push_back(answer[i]);
    }

    size = five.size();
    if (size == 0) five.push_back(-1);

    return five;
}