#include <string>
#include <vector>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    int attRank = 1;
    int count = 0;
        while (1) {
        for (int i = 0; i < rank.size(); i++) {
            if (rank[i] == attRank && count == 0 && attendance[i]) {
                answer += 10000 * i;
                count++;
                break;
            }
            else if (rank[i] == attRank && count == 1 && attendance[i]) {
                answer += 100 * i;
                count++;
                break;
            }
            else if (rank[i] == attRank && count == 2 && attendance[i]) {
                answer += i;
                return answer;
            }
        }
        attRank++;
    }
}