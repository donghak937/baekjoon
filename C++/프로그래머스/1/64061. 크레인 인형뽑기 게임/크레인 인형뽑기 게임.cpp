#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    stack<int> a;
    a.push(9); //stack top 오류 방지용 flag
    int k = 0;
    int answer = 0;

    for(int i = 0; i < moves.size(); i++){

        for(k = 0; k < board[0].size(); k++){
            if (board[k][moves[i] - 1] != 0){
                if (a.top() == board[k][moves[i]- 1]){
                    a.pop();
                    board[k][moves[i]- 1] = 0;
                    answer += 2;
                }
                else {
                    a.push(board[k][moves[i]- 1]);
                    board[k][moves[i]- 1] = 0;
                }
                break;
            }
        }
    }
    return answer;
}