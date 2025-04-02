#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    vector<int> a;
    int b = 0;
    for(int i = 0; i < num_list.size() / n; i++){
        for(int j = 0; j < n; j++){
            a.push_back(num_list[b]);
            b++;
        }
        answer.push_back(a);
        a.clear();
        
    }
    return answer;
}