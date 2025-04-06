#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    while(true){
        if (b == 2 || b == 5 || b == 1) return 1;
        else if(b % 2 != 0 && b % 5 != 0) break;
            
        if (b % 2 == 0){
            b /= 2;
        }
        if(b % 5 == 0){
            b /= 5;
        }
    }
    return a % b == 0 ? 1 : 2;
}