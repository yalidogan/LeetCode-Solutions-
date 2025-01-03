class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int validIndex = 0; 
        int count = 0; 

        bool found = false; 
        int n = nums.size(); 
        double totalSum = 0; 

        //Find the sum of elements 
        for(double num : nums){
            totalSum += num; 
        }

        double prevSum = 0; //To find sum just add the curr element to this 

        while(!found){

            if(validIndex > n - 1){
                break; 
            }

            double sum = prevSum + nums[validIndex]; 
            double rest = totalSum - sum; 

            if(sum >= rest){
                if(validIndex < n - 1){
                    found = true; 
                }
            }


            if(found){
                count++; 
                found = false; 
            }
            validIndex++; 
            prevSum = sum; 
        }


        return count; 
    }
};
