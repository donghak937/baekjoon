#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    int dx, dy;
    
    for(int i = 0; i < board.size(); i++){
        for(int j = 0; j < board.size(); j++){
            if(board[i][j] == 1){
                for(int dy = -1; dy <= 1; dy++){
                    for(int dx = -1; dx <= 1; dx++){
                        if(i + dy < 0 || i + dy >= board.size() ||j + dx < 0 || j + dx >= board.size() ) continue;
                        else if (board[i + dy][j + dx] == 0) board[i + dy][j + dx] = 2;
                    } 
                }
            }
        }
    }
    
    for(int i = 0; i < board.size(); i++){
        for(int j = 0; j < board.size(); j++){
            if (board[i][j] == 0) answer++;
        }
    }
    
    
    return answer;
}