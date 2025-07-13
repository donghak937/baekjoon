#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int hcount = 0;
    int count = 0;
    int max = 0;
    for(int i = 0; i <= citations[citations.size() - 1]; i++){
        for(int j = 0; j < citations.size(); j++){
            if (i <= citations[j]) {
                hcount++;
            }
            else count++;
        }
        
        if (i <= hcount){
            max = i;
        }
        hcount = 0;
        count = 0;
    }
    return max;
}