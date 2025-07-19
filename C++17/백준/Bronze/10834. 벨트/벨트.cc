#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    int ans1 = 0, ans2 = 0;
    int tmp1, tmp2, tmp3;
    int rot = 0;
    for(int i = 0; i < N; i++){
        cin >> tmp1 >> tmp2 >> tmp3;
        if (i == 0) {
            ans1 = tmp1;
            ans2 = tmp2;
        }
        else{
            ans1 *= tmp1;
            ans2 *= tmp2;
        }

        if (tmp3 == 1) rot = rot == 1 ? 0 : 1;
    }

    cout << rot << " " << (ans2 / ans1);
}
