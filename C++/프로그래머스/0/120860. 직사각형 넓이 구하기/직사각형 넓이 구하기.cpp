#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> dots) {
    int x1, x2, y1, y2;
    vector<int> a;
    int max;
    int min;
    
    a.push_back(dots[0][0]);
    a.push_back(dots[1][0]);
    a.push_back(dots[2][0]);
    
    sort(a.begin(), a.end());
    x1 = a[2];
    x2 = a[0];
    
    a.clear();
    
    a.push_back(dots[0][1]);
    a.push_back(dots[1][1]);
    a.push_back(dots[2][1]);
    sort(a.begin(), a.end());
    
    y1 = a[2];
    y2 = a[0];

    int x = abs(x2 - x1);
    int y = abs(y2 - y1);
    
    return x * y;
}