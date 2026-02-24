class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int primarysum = 0;
        int secondarysum = 0;
        for(int i=0; i<n; i++){
            primarysum += mat[i][i];
            secondarysum += mat[i][n-i-1];

        }
        if(n % 2 == 1) {
            return primarysum + secondarysum - mat[n/2][n/2];
        }
        return primarysum + secondarysum;
        
    }
};
