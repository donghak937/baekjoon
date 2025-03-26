#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    vector<int> answer;
    int count = 1;
    switch (n){
        case 1:
            for(int i = 0; i <= slicer[1]; i++){
                answer.push_back(num_list[i]);
            }
            break;
        case 2:
            for(int i = slicer[0]; i < num_list.size(); i++){
                answer.push_back(num_list[i]);
            }
            break;
        case 3:
            for(int i = slicer[0]; i <= slicer[1]; i++){
                answer.push_back(num_list[i]);
                
            }
            break;
        case 4:
            for(int i = slicer[0]; i <= slicer[1]; i++){
                if (count == slicer[2]) {
                    count = 1;
                    continue;
                }
                else answer.push_back(num_list[i]);
                count++;
            }
            break;       
        
    }
    return answer;
}