#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string before, string after) {
    int answer = 0;
    sort(after.begin(), after.end());
    sort(before.begin(), before.end());
    if (after == before) return 1;
    return 0;
}