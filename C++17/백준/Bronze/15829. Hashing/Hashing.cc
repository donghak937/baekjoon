#include <iostream>

using namespace std;

int main() {
    string str;
    int n;
    cin >> n;
    cin >> str;
    long long total = 0;
    long long r = 1;
    for(int i = 0; i < n; i++){
        total += ((str[i] - 'a' + 1) * r) % 1234567891;
        r *= 31;

    }
    cout << total;
}