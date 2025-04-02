#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    int to = 0;
    for (int i = 0; i < k; i++) {
        answer = to;
        to += 2;
        if (to > numbers.size()) {
            to -= numbers.size();
        }
    }
    return answer+1;
}