#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int start = 0;
    int end = people.size() - 1;
    sort(people.begin(), people.end());
    
    while (end > start) {
        if (people[start] + people[end] > limit){
            people[end] = 0;
            end--;
            answer++;
        }
        else{
            people[end] = 0;
            people[start] = 0;
            start++;
            end--;
            answer++;
        }
    }
    if(people[end] != 0 || people[start] != 0) answer++;
    return answer;
}