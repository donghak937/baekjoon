#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<vector<int>> dots) {
    double a[2];
    a[0] = double(dots[0][1] - dots[1][1]) / double(dots[0][0] - dots[1][0]); //(ab)
    a[1] = double(dots[2][1] - dots[3][1]) / double(dots[2][0] - dots[3][0]); //(cd)
    if (a[0] == a[1]) return 1;

    a[0] = double(dots[0][1] - dots[2][1]) / double(dots[0][0] - dots[2][0]); //(ac)
    a[1] = double(dots[3][1] - dots[1][1]) / double(dots[3][0] - dots[1][0]); //(db)
    if (a[0] == a[1]) return 1;

    a[0] = double(dots[2][1] - dots[1][1]) / double(dots[2][0] - dots[1][0]); //(ad)
    a[1] = double(dots[0][1] - dots[3][1]) / double(dots[0][0] - dots[3][0]); //(cb)
    if (a[0] == a[1]) return 1;
        
    return 0;
}