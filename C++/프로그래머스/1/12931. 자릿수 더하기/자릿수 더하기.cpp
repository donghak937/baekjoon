#include <iostream>
#include <string>
using namespace std;
int solution(int n)
{
    int answer = 0;
    string a = to_string(n);
    for(int i = 0; i < a.size(); i++){
        answer += a[i] - '0';
    }


    return answer;
}