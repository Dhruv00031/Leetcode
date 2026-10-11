class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i,j,n = matrix.size();
        int m = matrix[0].size(); //no of columns

        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(i<j) swap(matrix[i][j],matrix[j][i]);
            }
        }

        for(int i = 0; i < n; i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};