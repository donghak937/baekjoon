#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	int a[9][9];
	int max = -909090;
	int x, y;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> a[i][j];
			if (a[i][j] > max) {
				max = a[i][j];
				x = i;
				y = j;
			}
		}
	}

	cout << max << "\n" << x+1 << " " << y+1;

}