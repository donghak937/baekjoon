#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int i = 1;
    int a = 0;
    while (1) {
        if (i == n+1) break;
        a++;
        while (1){
            if (a % 10 != 3 && a % 3 != 0) break;
            if (a % 10 == 3) a++;
            if (a % 3 == 0) a++;
            if ((a / 10 >= 3 && a / 10 < 4)) {
                while (!(a / 10 >= 4)) {
                    a++;
                }
            }
            if ((a / 10 >= 13 && a / 10 < 14)) {
                while (!(a / 10 >= 14)) {
                    a++;
                }
            }             
        }
        i++;
        
    }
    return a;
}

