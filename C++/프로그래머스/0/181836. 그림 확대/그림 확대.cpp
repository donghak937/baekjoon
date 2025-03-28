#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    string word = "";
    int count = 0;
    int j = 0;
    int n = 0;
    while (1) {
        if (n == picture.size())  {
            break;
        }
        else if (j != picture[n].size()) {
            for (int i = 0; i < k; i++) {
                word += picture[n][j];
            }
            j++;
        }
        else {
            if (j == picture[n].size()) {
                for (int i = 0; i < k; i++) {
                    answer.push_back(word);
                }
                word = "";
                n++;
                j = 0;
            }
        }

    }
    return answer;
}