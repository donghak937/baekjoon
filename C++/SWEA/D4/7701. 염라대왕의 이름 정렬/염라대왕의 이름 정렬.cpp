/////////////////////////////////////////////////////////////////////////////////////////////
// 기본 제공코드는 임의 수정해도 관계 없습니다. 단, 입출력 포맷 주의
// 아래 표준 입출력 예제 필요시 참고하세요.
// 표준 입력 예제
// int a;
// float b, c;
// double d, e, f;
// char g;
// char var[256];
// long long AB;
// cin >> a;                            // int 변수 1개 입력받는 예제
// cin >> b >> c;                       // float 변수 2개 입력받는 예제 
// cin >> d >> e >> f;                  // double 변수 3개 입력받는 예제
// cin >> g;                            // char 변수 1개 입력받는 예제
// cin >> var;                          // 문자열 1개 입력받는 예제
// cin >> AB;                           // long long 변수 1개 입력받는 예제
/////////////////////////////////////////////////////////////////////////////////////////////
// 표준 출력 예제
// int a = 0;                            
// float b = 1.0, c = 2.0;               
// double d = 3.0, e = 0.0; f = 1.0;
// char g = 'b';
// char var[256] = "ABCDEFG";
// long long AB = 12345678901234567L;
// cout << a;                           // int 변수 1개 출력하는 예제
// cout << b << " " << c;               // float 변수 2개 출력하는 예제
// cout << d << " " << e << " " << f;   // double 변수 3개 출력하는 예제
// cout << g;                           // char 변수 1개 출력하는 예제
// cout << var;                         // 문자열 1개 출력하는 예제
// cout << AB;                          // long long 변수 1개 출력하는 예제
/////////////////////////////////////////////////////////////////////////////////////////////
 
#include<iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
bool comps(string a, string b){
    if (a.size() == b.size()) return a < b;
    return a.size() < b.size();
}
 
int main(int argc, char** argv)
{
    int test_case;
    int T;
 
    cin>>T;
 
    for(test_case = 1; test_case <= T; ++test_case)
    {
        
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<string> a;
        int N;
        cin >> N;
         
        for(int i = 0; i < N; i++){
            string tmp;
            cin >> tmp;
            a.push_back(tmp);
        }
         
        sort(a.begin(), a.end(), comps);
        a.erase(unique(a.begin(), a.end()), a.end());
        cout << "#" << test_case << "\n";
        for(string s : a){
            cout << s << "\n";
        }
         
    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}