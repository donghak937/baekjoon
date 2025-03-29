#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string a, string b) {
    string answer = "";
    int i = 1;
    int carry = 0;
    int hold = 0;
    while (1) {
        if (i > a.size()){
            for (i; i <= b.size(); i++) {
                hold = (b[b.size() - i] - '0') + carry;
                if (hold >= 10) {
                    carry = 1;
                    hold -= 10;
                }
                else {
                    carry = 0;
                }
                answer.push_back(hold + '0');
            }
            if (carry == 1) {
                answer.push_back(1 + '0');
            }
            break;
        }
        else if (i > b.size()) {
            for (i; i <= a.size(); i++) {
                hold = (a[a.size() - i] - '0') + carry;
                if (hold >= 10) {
                    carry = 1;
                    hold -= 10;
                }
                else {
                    carry = 0;
                }
                answer.push_back(hold + '0');
            }
            if (carry == 1) {
                answer.push_back(1 + '0');
            }
            break;
        }
        else if (carry == 0) {
            hold = (a[a.size() - i] - '0') + (b[b.size() - i] - '0');
            if (hold >= 10) {
                carry = 1;
                hold -= 10;
            }
            answer.push_back(hold + '0');
            i++;
        }
        else if (carry == 1) {
            hold = (a[a.size() - i] - '0') + (b[b.size() - i] - '0') + 1;
            if (hold >= 10) {
                carry = 1;
                hold -= 10;
            }
            else {
                carry = 0;
            }
            answer.push_back(hold + '0');
            i++;
        }
    }

    reverse(answer.begin(), answer.end());
    return answer;
}