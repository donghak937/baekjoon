#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n, vector <int>(n, 0));
    int num = 1;
	int lap = 0;
    int x = 0;
    int y = 0;
	while (num != n * n + 1) {
		if (answer[x][y] == 0) {
			answer[x][y] = num;
			num++;
		}
		else {
			if (lap & 1) {
				
				if (y > 0 && answer[x][y - 1] == 0) {
					y--;

				}
				else if (x > 0 && answer[x - 1][y] == 0) {
					x--;
				}
				else {
					lap--;
				}
			}
			else {
				if (y < n - 1 && answer[x][y + 1] == 0) {
					y++;

				}
				else if (x < n - 1 && answer[x + 1][y] == 0) {
					x++;

				}
				else {
					lap++;
				}
			}
		}
	}
    return answer;
}