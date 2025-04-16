#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int money;
    int a = 0, b = 0, c = 0 , d = 0;
    for (int i = 0; i < n; i++) {
        cin >> money;
        a = money / 25;
        money -= a * 25;
        b = money / 10;
        money -= b * 10;
        c = money / 5;
        money -= c * 5;
        d = money;
        cout << a << " " << b << " " << c << " " << d << endl;
    }
}