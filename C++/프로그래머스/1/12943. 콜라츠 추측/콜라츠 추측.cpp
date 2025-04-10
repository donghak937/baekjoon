#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int i = 0;
    long long a = num;
    while (1) {
        if (a == 1) break;
        if (a % 2 == 0) {
            a /= 2;
            i++;
        }
        else if (a % 2 == 1) {
            a = a * 3 + 1;
            i++;
        }
        if (a == 1) break;
        else if (i >= 500) break;
        
        
    }
    return i >= 500 ? -1 : i;
}