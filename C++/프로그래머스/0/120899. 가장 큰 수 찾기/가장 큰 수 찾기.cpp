#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int max = 0;
    for(int i = 0; i < array.size(); i++){
        if (array[i] > array[max]) max = i;
    }
    answer.push_back(array[max]);
    answer.push_back(max);
    return answer;
}