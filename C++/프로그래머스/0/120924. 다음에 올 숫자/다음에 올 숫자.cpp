#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = common[0];
    int n;
    if ((common[0] + common[2]) / 2 == common[1] && (common[0] + common[2]) % 2 == 0) {
        n = common[2] - common[1];
        for (int i = 0; i < common.size(); i++) {
            answer += n;
        }
    }
    else{
        n = common[2] / common[1];
        for(int i = 0; i < common.size(); i++){
            answer *= n;
        }
    }
    return answer;
}