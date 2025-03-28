#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int i = 1;
    while (1) {
        if (arr.size() <= i)
            break;
        else if (arr.size() == 1) break; 
        else i *= 2;
    }
    int j = 0;
    for (;j = (i - arr.size());) {
        arr.push_back(0);
    }
    
    return arr;
}