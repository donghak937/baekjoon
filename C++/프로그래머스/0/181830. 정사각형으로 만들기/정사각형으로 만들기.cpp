#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    vector<vector<int>> answer;
    vector<int> list;
    int x = arr.size();
    int y = arr[0].size();
    int line = 0;
    
    if (x > y) y = x;
    else x = y;
    
    if (arr.size() != x){
        for(int i = 0; i < x; i++){
                list.push_back(0);
        }
        while (arr.size() != x){
            arr.push_back(list);
        }
        
    }
    if (arr[0].size() != x){
        while(arr[x-1].size() != x){
            for(int i = arr[line].size(); i < x; i++){
                arr[line].push_back(0);
            }
            line++;
        }
    }
    return arr;
}