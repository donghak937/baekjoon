#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    if (a <= b){
        for(int i= 2; i <= a; i++){
            if (a % i == 0 && b % i == 0){
                a /= i;
                b /= i;
                i = 2;
            }
        }
    }
    else{
        for(int i= 2; i <= b; i++){
            if (a % i == 0 && b % i == 0){
                a /= i;
                b /= i;
                i = 2;
            }
        }
    }
    
    
    while(true){
        if (b == 2 || b == 5 || b == 1) return 1;
        else if(b % 2 != 0 && b % 5 != 0) return 2;
            
        if (b % 2 == 0){
            b /= 2;
        }
        if(b % 5 == 0){
            b /= 5;
        }
    }
}