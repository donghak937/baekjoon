#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    vector<string> a;
    string temp = "";
    for (int i = 0; i < my_string.size(); i++) {
        if (my_string[i] >= '0' && my_string[i] <= '9') {
            temp += my_string[i];
            if (i == my_string.size() - 1)a.push_back(temp);
        }
        else if (my_string[i] == ' ' ) {
            a.push_back(temp);
            temp = "";
        }
        else if (my_string[i] == '-' || my_string[i] == '+') {
            temp += my_string[i];
            a.push_back(temp);
            temp = "";
            i++;
        }
    }
    answer = stoi(a[0]);
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == "+") {
            answer += stoi(a[i + 1]);
        }
        else if (a[i] == "-") {
            answer -= stoi(a[i + 1]);
        }

    }
    return answer;
}