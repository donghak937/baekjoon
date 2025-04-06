#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<int> a;
    vector<int> b;
    for(int i = 0; i < score.size(); i++){
        a.push_back((score[i][0] + score[i][1]));
        b.push_back((score[i][0] + score[i][1]));
    }
    sort(b.begin(), b.end(), greater<int>());
    for(int i = 0; i < score.size(); i++){
        for(int j = 0; j < score.size(); j++){
            if(a[i] == b[j]){
                answer.push_back(j+1);
                break;
            }
        }
    }
    
    return answer;
}