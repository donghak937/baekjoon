#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int odd = 0;
    int even = 0;
    vector<int> answer;
    for(int i = 0; i < num_list.size(); i++){
        if (num_list[i] % 2 == 0) even++;
        else odd++;
    }
    answer.push_back(even);
    answer.push_back(odd);
    return answer;
}