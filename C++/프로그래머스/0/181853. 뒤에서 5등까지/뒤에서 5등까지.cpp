#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int temp = num_list[0];
    vector<int> answer;
    for(int i = 0; i < num_list.size(); i++){
        for(int j = 0; j < num_list.size(); j++){
            if (num_list[i] < num_list[j]){
                temp = num_list[i];
                num_list[i] = num_list[j];
                num_list[j] = temp;
            }
        }
    }
    
    for(int i = 0; i < 5 ; i++){
        answer.push_back(num_list[i]);
    }
    return answer;
}