class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rows[9][9]={false};
        bool cols[9][9]={false};
        bool box[9][9]={false};
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    continue;
                }
                int val=board[i][j]-'1';
                int idx=(i/3)*3+(j/3);
                if(rows[i][val] || cols[j][val] || box[idx][val]){
                    return false;
                }
                rows[i][val] = true;
                cols[j][val] = true;
                box[idx][val] = true;
            }
        }
        return true;
    }
};
