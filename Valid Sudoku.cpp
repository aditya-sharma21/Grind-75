class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, int> rows[9];
        unordered_map<int, int> columns[9];
        unordered_map<int, int> boxes[9];
        for(int i = 0; i < board.size(); i++) {
            for(int j = 0; j < board[i].size(); j++) {
        int temp = board[i][j], box_index = ((i / 3) * 3) + (j / 3);
        if (temp != 46 and (rows[i][temp]++ > 0 or columns[j][temp]++ > 0 or boxes[box_index][temp]++ > 0)) {
                    return false;
                }
            }
        }
        return true;
    }
}