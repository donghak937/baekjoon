#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	int a[101][101];
	int m, n;
	cin >> n >> m;
	int b;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> b;
			a[i][j] += b;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] <<" ";
		}
		cout << endl;
	}
}