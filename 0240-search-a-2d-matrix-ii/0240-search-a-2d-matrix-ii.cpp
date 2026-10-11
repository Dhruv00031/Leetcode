class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int rowIdx = 0;
        int colIdx = col - 1;
        while(rowIdx < row && colIdx >= 0){
            int element = matrix[rowIdx][colIdx];
            if(element == target) return true;
            else if(element < target){
                rowIdx++;
            }
            else{
                colIdx--;
            }
        }
        return false; 
    }
};