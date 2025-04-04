#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int a = 0;
    int min = 999;
    int index;
    for(int i = 0; i < array.size(); i++){
        a = array[i];
        if (a > n) a = a - n;
        else if (a < n) a = n - a;
        else return a;
        
        if (min > a){
            min = a;
            index = i;
        }
        else if (min == a){
            if (array[index] > array[i]) index = i;
        }
        
    }
    return array[index];
}