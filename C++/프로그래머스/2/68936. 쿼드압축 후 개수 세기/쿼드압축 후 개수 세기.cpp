#include <string>
#include <vector>

using namespace std;

vector<vector<int>> a;
int one = 0;
int zero = 0;
void quadtree(int n, int x, int y) {

    if (n == 1) {
        if (a[x][y] == 0) zero++;
        else one++;
        return;
    }

    bool isone = false;
    bool iszero = false;
    for (int i = x; i < x+n; i++) {
        for (int j = y; j < y+n; j++) {
            if (a[i][j] == 1) {
                isone = true;
            }
            else {
                iszero = true;
            }
        }
        if (isone && iszero) {
            break;
        }
    }

    if (!isone) {
        zero++;
        return;
    }
    if (!iszero) {
        one++;
        return;
    }

    int half = n / 2;

    quadtree(half, x, y);
    quadtree(half, x, y + half);
    quadtree(half, x + half, y);
    quadtree(half, x+half, y+half);
}

vector<int> solution(vector<vector<int>> arr) {
    vector<int> answer;
    a = arr;
    quadtree(arr.size(), 0, 0);
    answer.push_back(zero);
    answer.push_back(one);
    return answer;
}