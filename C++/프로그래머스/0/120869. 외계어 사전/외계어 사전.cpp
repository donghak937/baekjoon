#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int count = 0;
    string a= "";
    for(int i = 0; i < spell.size(); i++){
        a += spell[i];
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < dic.size(); i++){
        sort(dic[i].begin(), dic[i].end());
        if (dic[i].find(a) != string::npos) return 1;
    }
    return 2;
}