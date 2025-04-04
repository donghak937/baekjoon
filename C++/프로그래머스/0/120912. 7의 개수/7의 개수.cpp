#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    string a = "";
    for(int i = 0; i < array.size(); i++){
        a += to_string(array[i]);
    }
    for(int i = 0; i < a.size(); i++){
        if (a[i] == '7') answer++;
    }
    return answer;
}