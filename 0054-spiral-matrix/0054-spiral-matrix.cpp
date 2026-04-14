class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> vec;
        int top = 0, bottom = matrix.size() - 1;
        int left = 0, right = matrix[0].size() - 1;
    
        while(top <= bottom && left <= right){
            // Move Right
            for(int i = left; i <= right; i++){
                vec.push_back(matrix[top][i]);
            }
            top++;

            // Move Down
            for(int i = top; i <= bottom; i++){
                vec.push_back(matrix[i][right]);
            }
            right--;

            // CHECK: Does the row still exist?
            if (top <= bottom) {
                for(int i = right; i >= left; i--){
                    vec.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            // CHECK: Does the column still exist?
            if (left <= right) {
                for(int i = bottom; i >= top; i--){
                    vec.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return vec;
    }
};