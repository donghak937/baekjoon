#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string bin1, string bin2) {
    int a = 0;
    while (bin1.size() != bin2.size()) {
        if (bin1.size() > bin2.size()) {
            bin2 += '0';
            a = 2;
        }
        else {
            bin1 += '0';
            a = 1;
        }
    }
    if (a == 1) {
        reverse(bin2.begin(), bin2.end());
    }
    else if (a==2) {
        reverse(bin1.begin(), bin1.end());
    }
    else {
        reverse(bin2.begin(), bin2.end());
        reverse(bin1.begin(), bin1.end());
    }
    string answer = "";
    int carry = 0;
    int size = bin1.size() > bin2.size() ? bin2.size() : bin1.size();
    for (int i = 0; i < size; i++) {
        if (bin1[i] == '1' && bin2[i] == '1') {
            if (carry == 1) {
                answer += '1';
                carry = 1;
            }
            else {
                answer += '0';
                carry = 1;
            }
        }
        else if (bin1[i] != bin2[i]) {
            if (carry == 1) {
                answer += '0';
                carry = 1;
            }
            else {
                answer += '1';
            }
        }
        else if (bin1[i] == '0' && bin2[i] == '0') {
            if (carry == 1) {
                answer += '1';
                carry = 0;
            }
            else {
                answer += '0';
            }
        }

    }
    if (carry == 1) answer += '1';
    reverse(answer.begin(), answer.end());
    return answer;
}