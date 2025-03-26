#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    bool isTwo = false;
    int start = 0;
    int end = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (isTwo == false){
            if (arr[i] == 2){
                start = i;
                isTwo = true;
                answer.push_back(arr[i]);
            }
        }
        else {
            if(arr[i] == 2){
                end = i;
            }
        }
    }
    if (isTwo == false){
        answer.push_back(-1);
        return answer;
    }
    for(int i = start+1; i <= end; i++){
        answer.push_back(arr[i]);
    }

    return answer;
}