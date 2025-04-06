#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int answer = 0;
    int j = 0;
    char temp;
    if (A == B) return 0;
    while(true){
        if (A == B) break;
        if (j == A.size()) return -1;
        temp = A[A.size()-1];
        for(int i = A.size()-1; i > 0; i--){
            A[i] = A[i-1];
        }
        A[0] = temp;
        j++;
    }
    return j;
}