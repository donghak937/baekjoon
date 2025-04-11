#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	string a[5];
	string s = "";
	int i = 0, j = 0, k = 0;

	for (i = 0; i < 5; i++) {
		cin >> a[i];
	}
	i = 0;
	while (i != 100) {
		if (k != 5) {
			if (a[k].size() <= j) {
				k++;
			}
			else {
				s += a[k][j];
				k++;
			}
		}
		if (k == 5) {
			k = 0;
			j++;
		}

		i++;
	}
	cout << s;
	
}