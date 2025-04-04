#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    string a;
    for(i; i <= j; i++){
        a += to_string(i);
    }
    for(int r = 0; r < a.size(); r++){
        if (k == a[r] - '0') answer++;
    }
    return answer;
}