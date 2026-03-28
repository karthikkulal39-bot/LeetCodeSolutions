class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col=matrix.empty()?0:matrix[0].size();
        vector<int>rowCheck (matrix.size(),1);
        vector<int>colCheck (col,1);

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    rowCheck[i]=0;
                    colCheck[j]=0;
                }
            }
        }

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<col;j++){
                if(rowCheck[i]==0 || colCheck[j]==0 ){
                    matrix[i][j]=0;
                }
            }
        }
    }
};