#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string a = to_string(n);
    reverse(a.begin(), a.end());
    for(int i = 0; i < a.size(); i++){
        answer.push_back(a[i] - '0');
    }
    return answer;
}