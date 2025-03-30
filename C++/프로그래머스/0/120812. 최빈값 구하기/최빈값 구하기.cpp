#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    sort(array.begin(), array.end());
    int max = 0;
    int index = 0;
    bool same = false;
    int count = 1;
    for (int i = 0; i < array.size(); i++) {
        if (i + 1 == array.size()) {
            if (max == count) same = true;
            else if (max < count) {
                max = count;
                index = i;
                count = 1;
                same = false;
            }
            break;
        }
        else if (array[i] == array[i + 1]) {
            count++;
        }
        else if (array[i] != array[i + 1]) {
            if (max < count) {
                max = count;
                index = i;
                count = 1;
                same = false;
            }
            else if (max == count) {
                same = true;
                count = 1;
            }
            else count = 1;
        }
    }
    if (array.size() == 1) return array[0];
    else if (same == true) return -1;
    return array[index];
}