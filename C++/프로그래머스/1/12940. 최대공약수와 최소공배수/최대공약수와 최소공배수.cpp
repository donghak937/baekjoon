#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int a = 0;
    for(int i = 1; i <= n*m; i++){
        if (n % i == 0 && m % i == 0) a = i;
    }
    answer.push_back(a);
    a = 1;
    if (n > m){
        for(int i = n*m; i >= n; i--){
             if (i % m == 0 && i % n == 0) a = i;
        }
    }
    else{
        for(int i = n*m; i >= m; i--){
             if (i % m == 0 && i % n == 0) a = i;
        }
    }
    answer.push_back(a);
    
    return answer;
}