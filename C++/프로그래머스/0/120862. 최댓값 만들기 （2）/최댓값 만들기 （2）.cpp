#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = -9999999999999;
    for(int i = 0; i < numbers.size(); i++){
       for(int j = i; j < numbers.size(); j++){
            if (numbers[i] * numbers[j] > answer && i != j){
                answer =numbers[i] * numbers[j];
            }
        } 
    }
    return answer;
}