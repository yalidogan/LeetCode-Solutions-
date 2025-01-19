class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res; 
        if(nums.size() == 0){
            return {-1,-1}; 
        }
        if(nums.size() == 1){
            if(nums[0] == target){
                return {0,0};
            }
            else{
                return {-1,-1};
            }
        }

        int left = 0; 
        int right = nums.size() - 1; 
        bool leftFound = false; 
        bool rightFound = false; 

        while(left <= right){
            
            if(leftFound && rightFound){
                break; 
            }
            if(nums[left] == target){
                leftFound = true;
            }
            if(nums[right] == target){
                rightFound = true; 
            }
            if(!rightFound){
                right--; 
            }
            if(!leftFound){
                left++; 
            }
        }

        if(leftFound && rightFound){
            res = {left, right};
            return res;  
        }
        else if(leftFound){
            res = {left, left}; 
            return res; 
        }
        else if(rightFound){
            res = {right, right};
            return res; 
        }

        return {-1, -1}; 


    }
};
