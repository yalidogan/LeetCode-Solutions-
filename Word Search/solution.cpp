class Solution {
public:


    bool exist(vector<vector<char>>& board, string word) {
        
        int rows = board.size(); 
        int coloumns = board[0].size(); 


        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){

                //Will only search for the word if the letter is the same
                if(word[0] == board[i][j] && searchWord(i, j , 0, board, word)){
                    return true; 
                }


            }
        }


        return false; 
    }


    bool searchWord(int i , int j, int index, vector<vector<char>>& board, string word){

        if(index == word.length()){
            return true; 
        }

        if(i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || word[index] != board[i][j] ){
                return false; 
        }

        char temp = board[i][j];
        board[i][j] = '\0'; 


        if(
            searchWord(i + 1, j, index + 1, board, word) ||
            searchWord(i - 1, j, index + 1, board, word) ||
            searchWord(i , j + 1, index + 1, board, word) ||
            searchWord(i , j - 1, index + 1, board, word)){
            return true;
        }


        board[i][j] = temp; 


        return false; 
    }
};
