#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int numer = 0, denom = 0;
    numer1 = numer1 * denom2;
    numer2 = numer2 * denom1;
    numer = numer2 + numer1;
    denom = denom2 * denom1;
    int i = 1;
    
    while (i <= denom && i <= numer) {
        if (denom % i == 0 && numer % i == 0) {
            denom /= i;
            numer /= i;
            i = 1;
        }
        i++;
    }
    answer.push_back(numer);
    answer.push_back(denom);
    return answer;
}