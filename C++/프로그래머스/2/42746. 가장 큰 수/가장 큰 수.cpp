#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool comps(int a, int b){
    string a2 = to_string(a);
    string b2 = to_string(b);

    for(int i = 0; i < 3; i++){
        a2 += a2;
        b2 += b2;
    }
    return a2 + b2 > b2 + a2;
}

string solution(vector<int> numbers) {
    string answer = "";

    sort(numbers.begin(), numbers.end(), comps);

    for (int num : numbers) {
        answer += to_string(num);
    }
    if (answer[0] == '0') return "0";
    return answer;
}