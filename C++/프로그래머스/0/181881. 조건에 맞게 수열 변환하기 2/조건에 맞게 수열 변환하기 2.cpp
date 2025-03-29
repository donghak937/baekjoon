#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int count = 0;
    int k = 0;
    while (1){
        for(int i = 0; i < arr.size(); i++){
            if (arr[i] >= 50 && arr[i] % 2 == 0) {
                arr[i] /= 2;
                count++;
            }
            else if (arr[i] < 50 && arr[i] % 2 == 1) {
                arr[i] = arr[i] * 2 + 1;
                count++;
            }     
        }
        if (count == 0) break;
        count = 0;
        k++;
    }
    return k;
}