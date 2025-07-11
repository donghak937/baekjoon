#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<pair<int, int>> a(N);
    for (int i = 0; i < N; ++i) {
        cin >> a[i].first >> a[i].second;
    }

    sort(a.begin(), a.end());  // pair는 first → second 자동 정렬

    for (const auto& p : a) {
        cout << p.first << " " << p.second << '\n';
    }
}
