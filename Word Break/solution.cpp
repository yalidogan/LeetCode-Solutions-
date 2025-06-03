class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.length(); 

        int dp[n][n]; 
        //check if the index i-j in the dp array is a valid word or not 

        for(int i = 0; i < n; i++){

            for(int j = i; j < n; j++){
                if(i == j){
                    dp[i][j] = 0; //just a single letter no word 
                }

                string word = s.substr(i, j - i + 1); 
                //search the word in the wordDict and make it 1 if the word is included 
                dp[i][j] = 0; 

                for(int k = 0; k < wordDict.size(); k++){
                    if(wordDict[k] == word){
                        //word is valid 
                        dp[i][j] = 1; 
                        break; 
                    }
                }
            }
        }

        //If the whole word is valid just return true 
        if(dp[0][n - 1]){
            return true; 
        }


    vector<int> canBreak (n + 1, 0); 
    canBreak[0] = 1; 

    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            if(canBreak[j] && dp[j][i - 1]){
                canBreak[i] = 1; 
                break; 
            }
        }
    }

    return canBreak[n]; 
    
    }
};
