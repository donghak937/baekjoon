#include <string>
#include <vector>

using namespace std;

bool solution(bool x1, bool x2, bool x3, bool x4) {
    if ((x1 == true || x2 == true) && (x3 == true || x4 == true)) return true;
    else return false;
}