#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    string num[10] = { "zero","one","two","three","four","five","six","seven","eight","nine" };
    string temp = "";
    string a = "";

    for (int i = 0; i < numbers.size(); i++) {
        temp += numbers[i];
        for (int j = 0; j < 10; j++) {
            if (temp == num[j]) {
                a += to_string(j);
                temp = "";
            }
        }
    }
    answer = stold(a);
    return answer;
}