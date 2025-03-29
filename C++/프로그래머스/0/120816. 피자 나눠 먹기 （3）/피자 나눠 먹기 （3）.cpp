#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    if ((n * 1.0 / slice)  > (n / slice) ) return n / slice + 1;
    return n /slice;
}