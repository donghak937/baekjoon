#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 2;
    for (int i = 0; i < n; i++) {
        count = count * 2 - 1;
    }
    count *= count;
    cout << count;
}