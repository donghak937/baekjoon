#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer;
    for(int i = 0; i < query.size(); i++){
        if (i% 2 == 0){
            for(int j = 0; j <= query[i]; j++){
                answer.push_back(arr[j]);
            }
            arr.clear();
            for(int j = 0; j < answer.size(); j++){
                arr.push_back(answer[j]);
            }
            answer.clear();
            
        }
        else {
            for(int j = 0; j < arr.size(); j++){
                if (j >= query[i]) answer.push_back(arr[j]);
            }
            arr.clear();
            for(int j = 0; j < answer.size(); j++){
                arr.push_back(answer[j]);
            }
            answer.clear();
        }
    }
    return arr;
}