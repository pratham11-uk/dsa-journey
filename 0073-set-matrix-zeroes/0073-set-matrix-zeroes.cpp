class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector <bool> row(rows,0);
        vector <bool> col(cols,0);
        for (int i = 0 ; i < rows * cols; i++){
            int r = i / cols;
            int c = i % cols;
            if (matrix[r][c] == 0){
                row[r]=1;
                col[c]=1;
            }
        }
        for (int i = 0 ; i< rows * cols ; i++){
            int r = i / cols ;
            int c = i % cols;
            if (row[r] == 1 || col[c]==1) matrix[r][c] = 0 ;
        }
    }
};