#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int c, int d) {
    int list[4] = {a,b,c,d};
    int temp = 0;
    int count = 0;
    
    for (int i = 1; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (list[j] > list[j+1]) {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
    
    if (list[0] == list[1] && list[2] == list[3] && list[0] == list[2]) return 1111 * a;
    else if (list[0] != list[1] && list[2] == list[3] && list[1] == list[2]) return (10 * list[1] + list[0]) * (10 * list[1] + list[0]);
    else if (list[0] == list[1] && list[2] != list[3] && list[1] == list[2]) return (10 * list[0] + list[3]) * (10 * list[0] + list[3]);
    else if (list[0] == list[1] && list[2] == list[3] && list[1] != list[2]) return (list[2] + list[1]) * (list[2] - list[1]);
    else if (list[0] != list[1] && list[2] != list[3] && list[0] != list[2] && list[1] != list[2]) return list[0];
    else{
        if (list[0] == list[1]) return list[2] * list[3];
        else if (list[1] == list[2]) return list[0] * list[3];
        else return list[0] * list[1];  
    }
    
    
}