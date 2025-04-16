#include <iostream>
using namespace std;

int main() {
    int a, b, v;
    cin >> a >> b >> v;
    int count = (v - a) / (a - b);
    if ((v - a) % (a - b) != 0) count += 1;
    cout << count+1;
}