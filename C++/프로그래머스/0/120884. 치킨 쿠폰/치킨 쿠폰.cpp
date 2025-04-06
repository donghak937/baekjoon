#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = 0;
    int temp = 0;
    while(chicken > 9){
        answer += chicken / 10;
        temp += chicken % 10;
        chicken /= 10;
        chicken += temp;
        temp = 0;
    }
    
    return answer;
}