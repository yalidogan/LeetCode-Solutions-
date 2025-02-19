class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        //Take the target number as that many 1's 
        //And the array elements as the grouping of the 1's 

        
        vector<double> dp(target + 1, 0); 

        dp[0] = 1; 

        for(int i = 1; i <= target; i++){

            for(int j: nums){

                if(j <= i){
                    dp[i] += dp[i - j]; 
                }
            }
        }

        return dp[target];

    }

};
