#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int bigger = sides[0] > sides[1] ? sides[0] : sides[1];
    int smaller = sides[0] > sides[1] ? sides[1] : sides[0];
    for (int i = 0; i <= bigger; i++) {
        if (smaller + i > bigger) answer++;
    }
    for (int i = bigger + 1; i < bigger + smaller; i++) {
        answer++;
    }
    return answer;
}