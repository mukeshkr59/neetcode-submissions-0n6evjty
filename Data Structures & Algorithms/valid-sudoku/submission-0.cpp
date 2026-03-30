class Solution {
public:
    bool solve(vector<vector<char>>& board, int row, int col, char c){
        for (int i = 0; i < 9; i++) {
            if (i!=row && board[i][col] == c) {
                return false;
            }
            if (i!=col && board[row][i] == c) {
                return false;
            }
            int subRow = 3 * (row / 3) + (i / 3);
            int subCol = 3 * (col / 3) + (i % 3);
            if ( (subRow != row || subCol != col) && board[subRow][subCol] == c) {
                return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size();
        for( int i = 0 ; i < n ;i++){
            for(int j = 0;j<n;j++){
                if(board[i][j] != '.'){
                    if(!solve(board, i, j, board[i][j])){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
