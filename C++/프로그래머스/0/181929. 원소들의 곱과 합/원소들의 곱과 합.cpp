#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int add = 0;
    int mult = 1;
    for (int i = 0; i < num_list.size(); i++){
        add += num_list[i];
        mult *= num_list[i];
    }
    return add * add > mult ? 1 : 0;
}