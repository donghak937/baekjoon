#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    for(int i = 0; i < arr.size(); i++){
        if (answer.size() == 0){
            answer.push_back(arr[i]);
        }
        else if (answer.size() != 0 && answer[answer.size()-1] == arr[i]){
            answer.pop_back();
        }
        else if (answer.size() != 0 && answer[answer.size()-1] != arr[i])
            answer.push_back(arr[i]);
        
    }
    if (answer.size() == 0) answer.push_back(-1);
    return answer;
}