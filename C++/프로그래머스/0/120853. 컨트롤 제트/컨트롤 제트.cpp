#include <string>
#include <vector>
#include <sstream>


using namespace std;

int solution(string s) {
    int answer = 0;
    stringstream ss(s);
    vector<string> a;
    ss.str(s);
    string word;
    while (ss >> word) {
        a.push_back(word);
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == "Z") answer -= stoi(a[i - 1]);
        else answer += stoi(a[i]);
    }
    return answer;
}