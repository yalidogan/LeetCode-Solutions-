class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int rows = mat.size(); 
        int cols = mat[0].size(); 

        vector<int> rowFreq(mat.size(), 0); 
        vector<int> colFreq(mat[0].size(), 0); 

        unordered_map<int,int> rowMap;
        unordered_map<int,int> colMap; 
        for(int i = 0; i < rows; i++){
                
            for(int j = 0; j < cols; j++){
                rowMap[mat[i][j]] = i;
                colMap[mat[i][j]] = j;
            }
        }

        for(int i = 0; i < arr.size(); i++){
            int elem = arr[i]; 
            //Find elem in mat and increase freq of row and col 
            int rowIndex = rowMap[elem]; 
            int colIndex = colMap[elem]; 

            rowFreq[rowIndex]++; 
            colFreq[colIndex]++; 
            if(rowFreq[rowIndex] == cols ||colFreq[colIndex] == rows){
                return i; 
            }
        }

        return 0;


    }

};
