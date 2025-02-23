class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int m = matrix.size(); 
        int n = matrix[0].size(); 

        //Number of zeroes in that row and col 
        vector<int> rowOriginal(m, 0);
        vector<int> colOriginal(n, 0);

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == 0){
                    rowOriginal[i]++; 
                    colOriginal[j]++; 
                }
            }
        }

        for(int i = 0; i < m; i++){
            if(rowOriginal[i] > 0){
                //That row must be zeroes
                for(int j = 0; j < n; j++){
                    matrix[i][j] = 0; 
                }
            }
        }

        for(int j = 0; j < n; j++){
            if(colOriginal[j] > 0){
                for(int i = 0; i < m; i++){
                    matrix[i][j] = 0; 
                }
            }
        }


        


    }


};
