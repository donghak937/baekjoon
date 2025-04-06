#include <string>
#include <vector>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    vector<string> a;
    string temp = "";
    int x = 0;
    int num = 0;

    for (int i = 0; i < polynomial.size(); i++) {
        if (polynomial[i] == '+') {
            a.push_back("+");
        }
        else if (polynomial[i] == 'x') {
            if (temp.size() == 0) {
                a.push_back("x");
                temp = "";
                continue;
            }
            else {
                a.push_back(temp);
                temp = "";
            }
            a.push_back("x");
            temp = "";
        }
        else if (polynomial[i] != ' ') {
            temp += polynomial[i];
            if (i == polynomial.size() - 1) {
                a.push_back(temp);
            }
        }
        else if (polynomial[i] == ' ') {
            if (temp.size() == 0) continue;
            else {
                a.push_back(temp);
                temp = "";
            }
        }
    }
    for (int i = 0; i < a.size(); i++) {
        if (i == a.size() - 1) {
            if (a[i] == "x") {
                if (i == 0) {
                    x++;
                    continue;
                }
                else if (a[i - 1] != "+") continue;
                x++;
            }
            else {
                num += stoi(a[i]);
            }
        }

        else if (a[i] != "x" && a[i] != "+") {
            if (a[i + 1] == "x") {
                x += stoi(a[i]);
            }
            else if (a[i + 1] == "+") {
                num += stoi(a[i]);
            }
            else {
                if (a[i + 1] == "x") {
                    x += stoi(a[i]);
                }
                else {
                    num += stoi(a[i]);
                }
            }
        }
        else if (a[i] == "x") {
            if (i == 0) {
                x++;
            }
            else if (a[i - 1] == "+") {
                x++;
            }
        }
    }
    if (x == 1 && num == 0) {
        answer += "x";
    }
    else if (x == 1) {
        answer += "x + " + to_string(num);
    }
    else if (x == 0) {
        answer += to_string(num);
    }
    else if (num == 0) {
        answer += to_string(x) + "x";
    }
    else {
        answer += to_string(x) + "x + " + to_string(num);
    }

    return answer;
}