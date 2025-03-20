#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int num = 0;
    int size = num_list.size(); 
    if(num_list[size - 1] > num_list[size - 2]){
        num = num_list[size - 1] - num_list[size - 2];
        num_list.resize(size + 1, num);
    }
    else{
        num =  num_list[size - 1] * 2;
        num_list.resize(size + 1, num);
    }
    
    return num_list;
}