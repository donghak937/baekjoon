#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    int i = 0;
    while(k != 0){
        if (i + 1 == number.size() || number[i] < number[i+1]){
            number.erase(i, 1);
            k--;
            i = 0;
        }
        else i++;
    } 
    return number;
}