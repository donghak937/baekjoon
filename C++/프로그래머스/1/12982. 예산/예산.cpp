#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    int total = 0;
    sort(d.begin(), d.end());
    for(int i = 0; i < d.size(); i++){
        if (d[i] + total <= budget){
            total += d[i];
            answer++;
        }
        else return answer;
    }
}