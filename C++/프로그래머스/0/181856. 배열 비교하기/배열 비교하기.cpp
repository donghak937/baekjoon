#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int ar1 = 0, ar2 = 0;
    if(arr1.size() == arr2.size()){
        for(int i = 0; i < arr1.size(); i++){
            ar1 += arr1[i];
        }
        for(int i = 0; i < arr1.size(); i++){
            ar2 += arr2[i];
        }
        if (ar1 > ar2) return 1;
        else if (ar2 > ar1) return -1;
        else return 0;
    }
    else if (arr1.size() > arr2.size()) return 1;
    else return -1;
}