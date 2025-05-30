#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    sort(sides.begin(), sides.end(), greater<int>());
    return sides[1] + sides[2] > sides[0] ? 1 : 2;
}