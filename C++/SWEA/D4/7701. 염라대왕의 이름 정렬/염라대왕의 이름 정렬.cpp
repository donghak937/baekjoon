
#include<iostream>
#include <set>

using namespace std;

struct Compare {
    bool operator()(const string& a, const string& b) const {
        if (a.size() == b.size()) return a < b; 
        return a.size() < b.size();
    }
};

int main(int argc, char** argv)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int test_case;
	int T;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        

   		set<string, Compare> a;
		int N;
        cin >> N;
        
        for(int i = 0; i < N; i++){
        	string tmp;
            cin >> tmp;
            a.insert(tmp);
        }
        
        cout << "#" << test_case << "\n";
        for(string s : a){
        	cout << s << "\n";
        }
        
	}
	return 0;
}