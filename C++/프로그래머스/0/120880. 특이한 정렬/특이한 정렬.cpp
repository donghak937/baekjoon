#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> numlist, int n) {
    vector<int> a;
    int min = 100000;
    int dex;
    for (int j = 0; j < numlist.size(); j++) {
        for (int i = 0; i < numlist.size(); i++) {
            if (abs(numlist[i] - n) < min) {
                dex = i;
                min = abs(numlist[i] - n);
            }
            else if (abs(numlist[i] - n) == min) {
                if (numlist[i] > numlist[dex]) {
                    dex = i;
                    min = abs(numlist[i] - n);
                }
                else continue;
            }
        }
        a.push_back(numlist[dex]);
        numlist[dex] = 100000;
        min = 100000;
    }
    
    return a;
}