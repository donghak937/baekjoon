#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;

    for (int i = -100; i < 101; i++) {
        int a = 0;
        if (lines[0][0] <= i && lines[0][1] > i) a++;
        if (lines[1][0] <= i && lines[1][1] > i) a++;
        if (lines[2][0] <= i && lines[2][1] > i) a++;

        if (a > 1) answer++;
    }
   
    answer += 0;

    
    return answer;
}