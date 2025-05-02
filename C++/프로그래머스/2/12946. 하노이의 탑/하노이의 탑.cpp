#include <string>
#include <vector>

using namespace std;
vector<vector<int>> answer;
void top(int m, int from, int to, int mid){
    vector<int> b;
    if (m == 1){
        b.push_back(from);
        b.push_back(to);
        answer.push_back(b);
        b.pop_back();
        b.pop_back();
        return;
    }
    else{
        top(m - 1, from, mid, to);
        b.push_back(from);
        b.push_back(to);
        answer.push_back(b);
        b.pop_back();
        b.pop_back();
        top(m - 1, mid, to, from);
    }
    
}

vector<vector<int>> solution(int n) {
    top(n, 1, 3 ,2);
    return answer;
}