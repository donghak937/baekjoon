#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int ans = 0;

    while (n >= a) {
        int give = (n / a) * b;  
        ans += give;
        n = (n % a) + give;     
    }

    return ans;
}
