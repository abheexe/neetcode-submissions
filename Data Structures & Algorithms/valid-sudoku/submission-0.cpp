class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<int>> rows, cols;
        map<pair<int,int>, unordered_set<int>> sq;

        for(int r = 0; r < 9; r++){
            for(int c = 0; c < 9; c++){
                pair sq_key = {r/3,c/3};
                if(board[r][c] == '.')
                    continue;
                if(rows[r].count(board[r][c]) || cols[c].count(board[r][c]) || sq[sq_key].count(board[r][c]))
                    return false;
                
                rows[r].insert(board[r][c]);
                cols[c].insert(board[r][c]);
                sq[sq_key].insert(board[r][c]);
            }
        }
        return true;
    }
};
