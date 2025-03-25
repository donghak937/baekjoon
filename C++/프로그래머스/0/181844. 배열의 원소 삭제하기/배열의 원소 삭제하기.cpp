#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    int count = 0;
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < delete_list.size(); j++){
            if (arr[i] == delete_list[j]) count++;
        }
        if (count == 1) count = 0;
        else {
            answer.push_back(arr[i]);
            count = 0;
        }
    }
    return answer;
}