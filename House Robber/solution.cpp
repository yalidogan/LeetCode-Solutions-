class Solution {
    public int rob(int[] nums) {
        

        if(nums.length == 0){
            return 0; 
        }

        int[] dp = new int[nums.length + 1]; 

        dp[0] = 0; //Max amount we can get from 0 houses
        dp[1] = nums[0]; //Max amount from 1 house (the first one)

        for(int i = 1; i < nums.length; i++){
            dp[i + 1] = Math.max(dp[i] , dp[i - 1] + nums[i]);
            //Here you can choose between the old max or the new max + new house
            //The last element in the array will always be the max amount 
            //You can rob 
        }

        return dp[nums.length];
    }
}
